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
int pl[101][2];

int stat( char *a, char *b )
{
    if( a[0] == 'r' && b[0] == 'p' )
        return 2;
    else if( a[0] == 'r' && b[0] == 's' )
        return 1;
    else if( a[0] == 'p' && b[0] == 'r' )
        return 1;
    else if( a[0] == 's' && b[0] == 'r' )
        return 2;
    else if( a[0] == 's' && b[0] == 'p' )
        return 1;
    else if( a[0] == 'p' && b[0] == 's' )
        return 2;
    return 0;
}
//---------------------------------------------------->
int main()    //10903
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char s[10], ss[10];
    double res;
    while( cin >> N && N )
    {
        if( l ) pn;
        else ++l;

        memset( pl, 0, sizeof pl );

        cin >> k;
        len = k * N * ( N - 1 ) / 2;

        for( i = 1; i <= len; ++i )
        {
            scanf("%d %s %d %s", &x, s, &y, ss);

            temp = stat( s, ss );

            if( temp == 1 )
                pl[x][0]++, pl[y][1]++;
            else if( temp == 2 )
                pl[y][0]++, pl[x][1]++;
        }

        for( i = 1; i <= N; ++i )
        {
            res = pl[i][0]+pl[i][1];

            if( !res )
            {
                printf("-\n");
                continue;
            }

            res = double( pl[i][0] ) / res;

            printf("%.3lf\n", res );
        }
    }



    return 0;
}
