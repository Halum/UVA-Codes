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
#define SIZE 1000;
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int BIN_DEC( char *num )
{
    int i = 0;
    sum = 1;
    len = i+1;
    for( ; num[len]; ++i )
    {
        sum *= 2;
        sum += num[len] - 48;
        ++len;
    }

    return sum;
}

int GCD( int a, int b )
{
    if( a%b == 0 ) return b;
    else
        return GCD( b, a%b );
}
//---------------------------------------------------->
int main()    // 10193
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char num[31], pum[31];

    scanf("%d\n", &T);

    for( i = 1; i <= T; ++i )
    {
        gets( num );
        gets( pum );

        x = BIN_DEC( num );
        y = BIN_DEC( pum );

        printf("Pair #%d: ", i);

        if( x == y || GCD( x, y ) > 1 )
            puts("All you need is love!");
        else
            puts("Love is not all you need!");
    }



    return 0;
}
