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
char image[25][27];

void eagle( int i, int j )
{
    image[i][j] = '0';

    int x = j-1, y = i+1, k;

    if( y < N )
        for( k = 1; k <= 3; ++k, ++x )
            if( image[y][x] == '1' && x < N && x > -1 )
                eagle( y, x );

    for( k = 0, y = j-1; k < 2; ++k, y += 2 )
        if( image[i][y] == '1' && y < N && y > -1 )
            eagle( i, y );

    x = i - 1, y = j - 1;
    if( x > -1 )
        for( k = 1; k <= 3; ++k, ++y )
            if( image[x][y] == '1' && y > -1  && y < N )
                eagle( x, y );
}
//---------------------------------------------------->
int main()    // 352
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->

    while( scanf("%d\n", &N) != EOF )
    {
        for( i = 0; i < N; ++i )
            gets( image[i] );

        for( i = total = 0; i < N; ++i )
            for( j = 0; j < N; ++j )
                if( image[i][j] == '1' )
                {
                    ++total;
                    eagle( i, j );
                }

        printf("Image number %d contains %d war eagles.\n", ++l, total);
    }



    return 0;
}
