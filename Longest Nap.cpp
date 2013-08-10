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
struct tim
{
    int start;
    int finish;
} a[110];
char str[260];

bool function( tim a, tim b )
{
    return a.start < b.start;
}
//---------------------------------------------------->
int main()    //10191
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int h1, m1, h2, m2;
    while( scanf("%d", &T) != EOF )
    {
        getchar();

        a[0].finish = a[0].start = 600;
        a[T+1].start = a[T+1].finish = 18*60;

        for( i = 1; i <= T; ++i )
        {
            gets( str );
            sscanf( str, "%d:%d %d:%d", &h1, &m1, &h2, &m2 );

            a[i].start = h1 * 60 + m1;
            a[i].finish = h2 * 60 + m2;
        }

        sort( a, a + T + 2, function );

        MAX = 0;
        int from;

        for( i = 1; i <= T+1; ++i )
        {
            temp = a[i].start - a[i-1].finish;

            if( temp > MAX )
            {
                MAX = temp;
                from = a[i-1].finish;
            }
        }

        printf("Day #%d: the longest nap starts at %d:%.2d and will last for ", ++l, from / 60, from % 60 );

        if( MAX < 60 )
            printf("%d minutes.\n", MAX );
        else
            printf("%d hours and %d minutes.\n", MAX / 60, MAX % 60 );



    }

    return 0;
}
