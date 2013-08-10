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
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN, total;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
char maze[10][12];
bool demo[10][12];
int done, loop1, loop2;
void GO( int row, int col )
{
    if( !demo[row][col] )
    {
        demo[row][col] = true;

        if( maze[row][col] == 'N' )
        {
            if( row-1 < 0 )
                done = 1;
            else
                GO( row-1, col ), ++total;
        }
        else if( maze[row][col] == 'S' )
        {
            if( row + 1 == x )
                done = 1;
            else
                GO( row+1, col ), ++total;
        }
        else if( maze[row][col] == 'E' )
        {
            if( col + 1 == y )
                done = 1;
            else
                GO( row, col+1 ), ++total;
        }
        else if( maze[row][col] == 'W' )
        {
            if( col - 1 < 0 )
                done = 1;
            else
                GO( row, col - 1 ), ++total;
        }

    }
    else loop1 = row, loop2 = col;
}

//---------------------------------------------------->
int main()    // 10116
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int start;

    while( cin >> x >> y >> start && x + y + start )
    {
        memset( maze, 0, sizeof maze );
        memset( demo, 0, sizeof demo );
        sn;

        for( i = 0; i < x; ++i )
            gets( maze[i] );

        done = loop1 = loop2 = 0;
        total = 1;
        GO( 0, start-1 );

        if( done )
            printf("%d step(s) to exit\n", total);
        else
        {
            total = 0, check = 0, sum = 0;
            i = 0, j = start-1;
            while( 1 )
            {
                if( i == loop1 && j == loop2 )
                {
                    if( !check )
                    {
                        sum = total;
                        total = 0;
                        check = 1;
                    }
                    else break;
                }
                if( maze[i][j] == 'N' )
                    i--;
                else if( maze[i][j] == 'S' )
                    i++;
                else if( maze[i][j] == 'W' )
                    j--;
                else if( maze[i][j] == 'E' )
                    j++;
                total++;
            }
            printf("%d step(s) before a loop of %d step(s)\n", sum, total);
        }
    }



    return 0;
}
