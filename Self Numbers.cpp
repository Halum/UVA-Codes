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
#define SIZE 1000001
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
bool generated[SIZE];

int Generate( int N )
{
    sum = N;

    while( N )
    {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}
//---------------------------------------------------->
int main()    //640
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    for( i = 1; i < SIZE; ++i )
    {
        N = Generate( i );

        while( N < SIZE )
        {
            if( generated[N] )
                break;

            generated[N] = true;

            N = Generate( N );
        }
    }

    for( i = 1; i < SIZE; ++i )
        if( !generated[i] )
            printf("%d\n", i);


    return 0;
}

