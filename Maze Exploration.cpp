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
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
char maze[33][85];

void paint( int i, int j )
{
    maze[i][j] = '#';

    if( maze[i+1][j] == ' ' )
        paint( i+1, j );
    if( maze[i-1][j] == ' ' && i > -1 )
        paint( i-1, j );
    if( maze[i][j+1] == ' ' )
        paint( i, j+1 );
    if( maze[i][j-1] == ' ' && j > -1 )
        paint( i, j-1 );
}
//---------------------------------------------------->
int main()    // 784
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    cin >> T;


    while( T-- )
    {
        memset( maze, 0, sizeof maze );

        for( i = 0; ; ++i )
        {
            gets( maze[i] );
            if( maze[i][0] == '_' )
                break;
        }

        for( j = check = 0; j <= i; ++j )
        {
            for( k = 0; maze[j][k]; ++k )
            {
                if( maze[j][k] == '*' )
                {
                    paint( j, k );
                    //check = true;
                        //break;
                }
            }
            //if( check )
                //break;
        }

        for( j = 0; j <= i; ++j )
            puts( maze[j] );
    }



    return 0;
}
