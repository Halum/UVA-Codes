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
#define SIZE 105
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, total, row, col, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
bool demo[SIZE][SIZE];
char land[SIZE][SIZE];
void  WATER( int row, int col )
{
    if( !demo[row][col] )
    {
        total++;
        demo[row][col] = true;

        if( land[row+1][col] == 'W' )
            WATER( row+1, col );


        if( land[row+1][col+1] == 'W' )
            WATER( row+1, col+1 );

        if( row-1 > -1 )
        {
            if( land[row-1][col] == 'W' )
            WATER( row-1, col );

            if( land[row-1][col-1] == 'W' && col-1 > -1 )
                WATER( row-1, col-1 );

            if( land[row-1][col+1] == 'W' )
                WATER( row-1, col+1 );
        }

        if( col-1 > -1 )
        {
            if( land[row][col-1] == 'W' && col-1 > -1 )
                WATER( row, col-1 );
            if( land[row+1][col-1] == 'W' && col-1 > -1 )
                WATER( row+1, col-1 );
        }

        if( land[row][col+1] == 'W' )
            WATER( row, col+1 );
   }

}
//---------------------------------------------------->
int main()    // 469
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char num[SIZE];

    scanf("%d\n", &T);

    while( T-- )
    {
        i = 0;
        if( !l ) l = 1;
        else pn;

        while( gets( land[i++] ) )
        {
            if( isdigit(land[i-1][0]) )
            {

                ptr = strtok( land[i-1], " " );
                row = atoi( ptr );
                ptr = strtok( NULL, " " );
                col = atoi( ptr );

                memset( demo, 0, sizeof demo );
                total = 0;
                WATER( row-1, col-1 );
                printf("%d\n", total);

                while( gets( num ) != NULL )
                {
                    if( !num[0] )
                        break;

                    ptr = strtok( num, " " );
                    row = atoi( ptr );
                    ptr = strtok( NULL, " " );
                    col = atoi( ptr );

                    memset( demo, 0, sizeof demo );
                    total = 0;
                    WATER( row-1, col-1 );
                    printf("%d\n", total);
                }
                break;
            }
        }
    }



    return 0;
}
