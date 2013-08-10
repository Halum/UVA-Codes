#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#include<deque>
#include<set>
#include<algorithm>
#include<ctime>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sn scanf("\n")
#define eps 1e-12
#define SIZE 10000
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
bool eu[SIZE];
bool prime[SIZE];

void sieve( )
{
    int root = sqrt(SIZE);
    memset( prime, true, sizeof prime );

    prime[0] = prime[1] = false;

    for( int i = 3; i <= root; i += 2 )
        if( prime[i] )
            for( int j = i*i; j <= SIZE; j += i*2 )
                prime[j] = false;
}

void euler( )
{
    for( int i = 0; i <= SIZE; ++i )
    {
        temp = i * i + i + 41;
        if( temp <= SIZE )
            eu[temp] = true;
        else
            break;
    }

}

int countt( int a, int b, char ch )
{
    int total = 0;

    if( ch == 'p' ){
        for( ; a <= b; ++a )
            if( prime[a] && a%2 ) total++;
    }

    else{
        for( ; a <= b; ++a )
            if( eu[a] ) total++;
    }


    return total;
}
//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    double res;
    int a, b;

    sieve();
    euler();

    /*for( i = 0; i < 100; ++i )
        if(eu[i]) cout<<i<<endl;*/

    while( scanf( "%d%d", &a, &b ) != EOF )
    {
        x = countt( a, b, 'p' );
        y = countt( a, b, 'e' );

        cout << x << ' ' << y <<endl;
        if( x )
            res = (double)( y / x * 100 );
        /*else
            res = (double)*/

        printf("%.2lf\n", res);
    }




    return 0;
}

