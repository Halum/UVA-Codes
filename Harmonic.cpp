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
#define SIZE 1000000
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->
LL GCD(LL a, LL b)
{
    if( a + b )
    {
        if( !b )
            return a;
        return GCD(b, a % b);
    }
    return 0;
}

LL LCM(LL a, LL b)
{
    if( a + b )
        return (a / GCD(a,b) *b);
    return 0;
}
//---------------------------------------------------->
int main()    // 12068
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    LL harm[ 10 ], T, N;
    cin >> T;

    for( i = 1; i <= T; ++i)
    {
        cin >> N;
        printf( "Case %d: " ,i );
        LL dwn = 1;
        for( j = 0; j < N; ++j)
        {
            cin >> harm[ j ];
            dwn = LCM( dwn, harm[ j ] );
        }
        LL up = 0;
        for( j = 0; j < N; ++j)
            up += dwn / harm[ j ];

        N *= dwn;

        LL dev = GCD( up, N );
        up /= dev, N /= dev;

        printf( "%lld/%lld\n" ,N , up);
    }

    return 0;
}
