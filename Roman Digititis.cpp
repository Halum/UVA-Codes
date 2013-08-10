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

//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int roman[101][5];

    /*while( cin >> N && N )
    {*/
    memset( roman, 0, sizeof roman );

    for( N = 1; N <= 100; ++N )
    {
        if( N < 100 )
        {
            x = N % 10;

            if( x < 4 && x > 0 )
                for( i += 1; i <= x; ++i )
                    roman[N][0] += i, printf("N: %d %d\n", N, roman[N][0]);
            else if( x == 4 )
                roman[N][0] += 1, roman[N][1] += 1;
            else if( x == 5 )
                roman[N][1] += 1;
            else if( x < 9 && x > 0 )
            {
                roman[N][1] += 1;
                for( i += 1; i <= x%5; ++i )
                    roman[N][0] += i;
            }
            else if( x == 9 )
                roman[N][2] += 1, roman[N][0] += 1;

            if( N > 9 )
            {
                x += N/10;

                if( x < 4 )
                    for( i += 1; i <= x; ++i )
                        roman[N][2] += i;
                else if( x == 4 )
                    roman[N][3] += 1, roman[N][2] += 1;
                else if( x == 5 )
                    roman[N][3] += 1;
                else if( x < 9 )
                {
                    roman[N][3] += 1;
                    for( i += 1; i <= x%5; ++i )
                        roman[N][2] += i;
                }
                else if( x == 9 )
                    roman[N][4] += 1, roman[N][2] += 1;
            }
        }
        else
            roman[N][4] += 1;

    }


    while( cin >> N && N )
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", N, roman[N][0], roman[N][1], roman[N][2], roman[N][3], roman[N][4] );
    //}


    return 0;
}
