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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define eps 1e-7
#define SIZE 31700
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->
bool sieve[ SIZE ];
int prime[ 8000 ];
int Phi ( int n )
{
    int i, count, divisor = n;
    for ( i = 0; prime[ i ] * prime [ i ] <= n && prime[ i ]; ++i)
    {
        if ( n % prime[ i ] == 0 )
        {
            while ( n % prime[ i ] == 0 )
                n /= prime[ i ];

            divisor *= ( double ) ( prime[ i ] - 1 ) / prime[ i ];
        }
    }
    if ( n > 1 ) divisor *= ( double ) ( n - 1 ) / n;
    return divisor;
}

void GenPrime(long long int Z)
{
    /*  Its needed globally
    bool sieve[Z]; */
    register unsigned int i, j;
    unsigned int root = sqrt( Z );
    for( i = 3; i <= root; i += 2 )
    {
        if( ! sieve[ i ] )
            for( j = i + i; j <= Z; j += i )
                if( ! sieve[ j ] ) sieve[ j ] = 1;
    }
    for( i = 2, j = 0; i <= Z; ++i )
        if ( !sieve[ i ] )
            prime[ j++ ] = i;
}
//---------------------------------------------------->
int main()    // 10179
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    GenPrime( SIZE );

    while ( cin >> N && N )
        cout << Phi( N ) << endl;


    return 0;
}
