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
void calc( char *a )
{
    for( int i = 0; a[i]; ++i )
        if( a[i] == 'X' ) x++;
        else if( a[i] == 'O' ) y++;
}
//---------------------------------------------------->
int main()    //10363
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    char board[3][4], str[5];

    N = atoi( gets( str ) );

    for( k = 1; k <= N; ++k )
    {
        x = y = 0;

        for( i = 0; i < 3; ++i )
        {
            gets( board[i] );
            //puts( board[i] );
            calc( board[i] );
        }

        //cout << x << ' ' << y << endl;

        if( x >= y )
        {
            if( x == y || x == y+1 )    puts("yes");
        }
        else puts("no");

        if( k < N )
            gets( str );
    }



    return 0;
}

