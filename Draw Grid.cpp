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
int main()    // 11074
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int grid, sqr, thik;

    while( cin >> sqr >> thik >> grid && sqr+thik+grid )
    {
        printf("Case %d:\n", ++total);
        for( i = 0; i <= grid; ++i )
        {
            for( j = 1; j <= thik; ++j )
            {
                temp = ( grid+1 ) * thik + grid * sqr;
                for( k = 1; k <= temp; ++k )
                    printf("*");
                pn;
            }

            if( i < grid )
            {
                for( j = 1; j <= sqr; ++j )
                {
                    for( k = 0; k <= grid; ++k )
                    {
                        for( l = 1; l <= thik; ++l )
                            printf("*");
                        if( k < grid )
                        {
                            for( l = 1; l <= sqr; ++l )
                                printf(".");
                        }

                    }
                    pn;
                }
            }
        }
        pn;


    }


    return 0;
}

