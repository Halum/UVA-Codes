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
#define SIZE 215000
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

LL MAKE_NUM( int len )
{
    LL n = 1;
    for( int i = 1; i <= len; ++i )
        n *= 10;

    return n;
}

double CONVERT( double frac, char *num )
{
    int len = strlen( &num[2] );
    frac /= pow( 10, len );
    return frac;
}
//---------------------------------------------------->
int main()    // 332
{
    register int i, j=1, k, l=0;
    freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char num[15];
    LL deno, nume, comon, ryt, left;
    double frac, p1, p2;

    while( cin >> j && j != -1 )
    {
        cin >> num;
        len = strlen( num );

        if( !j )
        {
            printf("Case %d: ", ++l);

            deno = MAKE_NUM( len - 2 );

            nume = atoll( &num[2] );

            comon = GCD( nume, deno );

            if( comon )
            {
                nume /= comon;
                deno /= comon;
                printf("%lld/%lld\n", nume, deno );
            }
            else
                printf("%lld/%lld\n", nume, deno );

            continue;
        }

        k = len - j - 2;

       // printf("%d  %d\n", k, j);

        frac = atoll( &num[2] );
        frac = CONVERT( frac, num );

        cout << frac << endl;

        p1 = pow( 10, j+k );
        p2 = pow( 10, k );

        left = p1, ryt = p2;

        deno = left - ryt;

        //cout << deno << endl;

        p1 *= frac; //* pow( 10, k+j );
        p2 *= frac; //* pow( 10, k );

        left = p1, ryt = p2;

        nume = left - ryt;

        //cout << p1 << endl;

        comon = GCD( deno, nume );

        //printf("%lld    %lld\n", nume, deno);
        printf("Case %d: ", ++l);

        if( comon )
        {
            nume /= comon;
            deno /= comon;
            printf("%lld/%lld\n", nume, deno );
        }
        else
            printf("%lld/%lld\n", nume, deno );


    }



    return 0;
}

