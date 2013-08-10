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
#define SIZE 1002
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
bool sieve[10001];
int prime[1300];  // if crash increase it
void GenPrime(long long int Z)
{
    /*  Its needed globally
    bool sieve[Z];*/
    register unsigned int i, j;
    unsigned int root = sqrt( Z );
    for( i = 3; i <= root; i += 2 )
    {
        if( ! sieve[ i ] )
            for( j = i + i; j <= Z; j += i )
                if( ! sieve[ j ] ) sieve[ j ] = 1;
    }
    prime[0] = 2;

    for( i = 3, j = 0; i <= Z; i+=2 )
        if( !sieve [ i ] )
            prime[ j++ ] = i;

}
//---------------------------------------------------->
int main()    // 10852
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    GenPrime(10000);

    cin >> T;
    while( T-- )
    {
        cin >> N;
        for( i=0; ; ++i )
            if( 2 * prime[i] > N )
            {
                printf( "%d\n",prime[i] );
                break;
            }
    }


    return 0;
}

