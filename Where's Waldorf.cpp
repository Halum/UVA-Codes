/*
ID: my.lost1
PROG: test
LANG: C++
*/
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
char dic[55][55];
char word[55];
int r, c;

void find_pos( int i, int j, int len )
{
    if( j + len <= c ){ // ryt
        for( int k = j, l = 0; l < len; ++l, ++k ){
            if( dic[i][k] != word[l] ) break;
        }
        if( l == len ){
            x = i+1, y = j+1;
        }
    }

    if( !x and !y and j-len >= -1 ){ // left
        for( int k = j, l = 0; l < len; ++l, --k ){
            if( dic[i][k] != word[l] ) break;
        }
        if( l == len ){
            x = i+1, y = j+1;
        }
    }

    if( !x and !y and i+len <= r ){ // down
        for( int k = i, l = 0; l < len; ++i, ++k ){
            if( dic[k][j] != word[l] )  break;
        }
        if( l == len ){
            x = i+1, y = j+1;
        }
    }

    if( !x and !y and i-len >= -1 ){ // up
        for( int k = i, l = 0; l < len; ++i, --k ){
            if( dic[k][j] != word[l] )  break;
        }
        if( l == len ){
            x = i+1, y = j+1;
        }
    }


}
//---------------------------------------------------->
int main()    //10010
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->




    cin >> T;

    while( T-- )
    {
        scanf("%d %d\n", &r, &c);

        for( i = 0; i < r; ++i ){
            gets( dic[i] );
            puts( dic[i] );
        }

        scanf("%d\n", &N);

        while( N-- ){
            gets( word );
            len = strlen( word );
            x = y = 0;

            for( i = 0; i < r; ++i ){
                for( j = 0; j < c; ++j ){
                    if( x and y ) break;
                    find_pos( i, j, len );
                }
            }

            printf("%d %d\n", x, y);
        }
        pn;
    }



    return 0;
}

