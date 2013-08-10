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
#define SIZE 1000;
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
struct yo
{
    char nam;
    int siz;
}X[2700], Y;

char maap[52][52];

void HOLE( int i, int j )
{
    ch = maap[i][j];
    maap[i][j] = '.';
    ++total;

    if( ch == maap[i+1][j] )
        HOLE( i+1, j );

    if( ch == maap[i-1][j] )
        HOLE( i-1, j );

    if( ch == maap[i][j+1] )
        HOLE( i, j+1 );

    if( ch == maap[i][j-1] )
        HOLE( i, j-1 );

}

void swap( int i, int j )
{
    Y = X[i];
    X[i] = X[j];
    X[j] = Y;
}
//---------------------------------------------------->
int main()    // 10946
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->


    while( cin >> row >> col && row+col )
    {
        sn;
        for( i = 1; i <= row; ++i )
            gets( &maap[i][1] );

        for( i = k = 1; i <= row; ++i )
            for( j = 1; j <= col; ++j )
            {
                if( isupper(maap[i][j]) ) // upper
                {
                    X[k].nam = maap[i][j];
                    total = 0;
                    HOLE( i, j );
                    X[k++].siz = total;
                }
            }

        for( i = 1; i < k; ++i )
            for( j = 1; j < k-i; ++j )
            {
                if( X[j].siz < X[j+1].siz )
                    swap( j, j+1 );
                else if( X[j].siz == X[j+1].siz )
                {
                    if( X[j].nam > X[j+1].nam )
                        swap( j, j+1 );
                }
            }
        printf("Problem %d:\n", ++l);
        for( i = 1; i < k; ++i )
            printf("%c %d\n", X[i].nam, X[i].siz );

        memset( maap, 0, sizeof maap );
    }



    return 0;
}
