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
#define SIZE 220
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
char tree[SIZE][SIZE];
int mon[SIZE][SIZE];
int indent[SIZE];
void MONKEY( int row, int col )
{
    mon[row][col] = total;
    ch = tree[row][col];
    tree[row][col] = 1;


    if( tree[row+1][col] == ch )
        MONKEY( row+1, col );

    if( tree[row-1][col] == ch && row-1 > -1 )
        MONKEY( row-1, col );

    if( tree[row][col+2] == ch )
        MONKEY( row, col+2 );

    if( tree[row][col-2] == ch && col-2 > -1 )
        MONKEY( row, col-2 );

    if( tree[row+1][col+2] == ch )
        MONKEY( row+1, col+2 );

    if( tree[row-1][col-2] == ch && row-1 > -1 && col-2 > -1 )
        MONKEY( row-1, col-2 );

    if( tree[row+1][col-2] == ch && col-2 > -1 )
        MONKEY( row+1, col-2 );

    if( tree[row-1][col+2] == ch && row-1 > -1 )
        MONKEY( row-1, col+2 );
}
//---------------------------------------------------->
int main()    // 776
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    i = 0;
    while( gets( tree[i++] ) != NULL )
    {
        if( tree[i-1][0] == '%' )
        {
            memset( mon, 0, sizeof mon );
            memset( indent, 0, sizeof indent );
            total = 0;

            for( j = 0; j < i-1; ++j )
                for( k = 0; tree[j][k]; ++k )
                {
                    if( isalpha( tree[j][k] ) )
                    {
                        total++;
                        MONKEY( j, k );
                    }
                    if( mon[j][k] > indent[k] )
                        indent[k] = mon[j][k];
                }

            for( j = 0; j < i-1; ++j )
            {
                for( k = 0; tree[j][k]; ++k )
                {
                    if( !k )
                    {
                        if( indent[k] < 10 )
                            printf("%d", mon[j][k]);
                        else if( indent[k] < 100 )
                            printf("%2d", mon[j][k]);
                        else if( indent[k] < 1000 )
                            printf("%3d", mon[j][k]);
                        else if( indent[k] < 10000 )
                            printf("%4d", mon[j][k]);
                    }
                    else if( mon[j][k] )
                    {
                        if( indent[k] < 10 )
                            printf(" %d", mon[j][k]);
                        else if( indent[k] < 100 )
                            printf(" %2d", mon[j][k]);
                        else if( indent[k] < 1000 )
                            printf(" %3d", mon[j][k]);
                        else if( indent[k] < 10000 )
                            printf(" %4d", mon[j][k]);
                    }
                }
                printf("\n");
            }
            printf("%%\n");
            i=0;
            memset( tree, 0, sizeof tree );
        }
    }

    memset( mon, 0, sizeof mon );
    memset( indent, 0, sizeof indent );
    total = 0;

    for( j = 0; j < i-1; ++j )
        for( k = 0; tree[j][k]; ++k )
        {
            if( isalpha( tree[j][k] ) )
            {
                total++;
                MONKEY( j, k );
            }
            if( mon[j][k] > indent[k] )
                indent[k] = mon[j][k];
        }

    for( j = 0; j < i-1; ++j )
    {
        for( k = 0; tree[j][k]; ++k )
        {
            if( !k )
            {
                if( indent[k] < 10 )
                    printf("%d", mon[j][k]);
                else if( indent[k] < 100 )
                    printf("%2d", mon[j][k]);
                else if( indent[k] < 1000 )
                    printf("%3d", mon[j][k]);
                else if( indent[k] < 10000 )
                    printf("%4d", mon[j][k]);
            }
            else if( mon[j][k] )
            {
                if( indent[k] < 10 )
                    printf(" %d", mon[j][k]);
                else if( indent[k] < 100 )
                    printf(" %2d", mon[j][k]);
                else if( indent[k] < 1000 )
                    printf(" %3d", mon[j][k]);
                else if( indent[k] < 10000 )
                    printf(" %4d", mon[j][k]);
            }
        }
        printf("\n");
    }
    printf("%%\n");



    return 0;
}
