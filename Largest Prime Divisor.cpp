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
#define SIZE 10001000
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
bool prime[SIZE];
vector <LL> PrimeList;
vector <LL> PrimeFactor;

bool isPrime( LL n )
{
    if( n < 2 || n %2 == 0 ) return false;

    int root = sqrt( n );

    for( int i = 3; i <= root; ++i )
        if( n % i == 0 ) return false;

    return true;
}

void  sieve()
{
    memset( prime, 1, sizeof prime );
    int root = sqrt( SIZE );

    prime[0] = prime[1] = false;

    for( int i = 3; i <= root; i += 2 )
        if( prime[i] )
            for( int j = i * i; j <= SIZE; j += 2 * i )
                prime[j] = false;

    PrimeList.push_back( 2 );

    for( int i = 3; i <= SIZE; ++i )
        if( prime[i] )  PrimeList.push_back( i );
}

LL findFactor( LL N )
{
    int i = 0;

    PrimeFactor.clear();

    while( PrimeList[i] * PrimeList[i] <= N )
    {
        while( N % PrimeList[i] == 0 )
        {
            PrimeFactor.push_back( PrimeList[i] );
            N /= PrimeList[i];
        }
        ++i;
    }

    if( N > 1 )
        PrimeFactor.push_back( N );

    int len = PrimeFactor.size();

    sort( PrimeFactor.begin(), PrimeFactor.end() );

    if( PrimeFactor[0] == PrimeFactor[len-1] )  return -1;

    return PrimeFactor[len-1];
}
//---------------------------------------------------->
int main()    // 11466
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    sieve();

    LL N;

    while( cin >> N && N )
    {
        if( N < 0 ) N *= -1;
        if( N < 4 || ( N < SIZE && N%2 && prime[N] ) || isPrime(N) )
        {
            printf("-1\n");
            continue;
        }

        cout << findFactor( N ) << endl;
    }




    return 0;
}
