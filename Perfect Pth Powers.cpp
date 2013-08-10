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
#define PI (2.0 * acos(0.0))
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

//---------------------------------------------------->
int main()    //10622
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    LL n, I, lim, tmp, p;

    while( cin >> n && n )
    {
        if( n > 0 )
        {
            lim = sqrt( n );
            check = false;

            for( I = 2; I <= lim; ++I )
            {
                tmp = I;
                p = 2;

                while( tmp < n )
                {
                    tmp = pow( I, p );
                    ++p;
                }

                if( tmp == n )
                {
                    printf("%lld\n", p-1 );
                    check = true;
                    break;
                }
            }

            if( !check )    puts("1");
        }
        else
        {
            lim = sqrt( n * -1 );
            check = false;

            for( I = -2; I >= -lim; --I )
            {
                tmp = I;
                p = 2;

                while( tmp > n )
                {
                    tmp = pow( I, p );
                    ++p;
                }

                if( tmp == n )
                {
                    printf("%lld\n", p-1 );
                    check = true;
                    break;
                }
            }

            if( !check )    puts("1");
        }
    }


    return 0;
}
