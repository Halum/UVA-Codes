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
int r, c, n;
char game[2][105][105];

char  findNext( char a, char b )
{
    if( a == 'S' && b == 'R' ){
        check = true;
        return 'R';
    }
    else if( a == 'P' && b == 'S' ){
        check = true;
        return 'S';
    }
    else if( a == 'R' && b == 'P' ){
        check = true;
        return 'P';
    }
    return a;
}

void convert( int g, int i, int j )
{
    if( !g ) temp = 1;
    else temp = 0;

    check = false;

    if( j+1 < c )
        game[temp][i][j] = findNext( game[g][i][j], game[g][i][j+1] );
    if( !check && j-1 > -1 )
        game[temp][i][j] = findNext( game[g][i][j], game[g][i][j-1] );
    if( !check && i + 1 < r )
        game[temp][i][j] = findNext( game[g][i][j], game[g][i+1][j] );
    if( !check && i - 1 > -1 )
        game[temp][i][j] = findNext( game[g][i][j], game[g][i-1][j] );
}

//---------------------------------------------------->
int main()    //10443
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;

    while( T-- )
    {
        cin >> r >> c >> n;

        memset( game[1], 0, sizeof game[1] );

        if( l ) pn;
        else ++l;

        for( i = 0; i < r; ++i )
            scanf("%s", game[0][i] );

        for( i = 1; i <= n; ++i )
        {
            if( i % 2 ) x = 0;
            else x = 1;

            for( j = 0; j < r; ++j )
                for( k = 0; k < c; ++k )
                    convert( x, j, k );
        }

        for( i = 0; i < r; ++i )
                puts( game[temp][i] );

    }


    return 0;
}
