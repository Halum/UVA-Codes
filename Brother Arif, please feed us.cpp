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
map <int, bool> row;
map <int, bool> col;
int R, C;

bool Scape( int r, int c )
{
    if( !col[c] )
    {
        if( !row[r] )
            return true;
        if( !row[r+1] && r+1 < R )
            return true;
        if( !row[r-1] && r-1 > -1 )
            return true;
    }

    if( !row[r] )
    {
        if( !col[c+1] && c+1 < C )
            return true;
        if( !col[c-1] && c-1 > -1 )
            return true;
    }

    return false;
}
//---------------------------------------------------->
int main()    //11760
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    while( scanf("%d%d%d", &R, &C, &N) && R + C + N )
    {
        row.clear();
        col.clear();

        while( N-- )
        {

            scanf("%d%d", &x, &y);

            row[x] = true;
            col[y] = true;
        }

        scanf("%d%d", &x, &y);

        printf("Case %d: ", ++l);

        if( Scape( x, y ) ) printf("Escaped again! More 2D grid problems!\n");
        else printf("Party time! Let's find a restaurant!\n");
    }




    return 0;
}
