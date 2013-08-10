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

//---------------------------------------------------->
int main()    //12136
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int H, M, h, m, start, end;

    cin >> T;

    for( i = 1; i <= T; ++i )
    {
        scanf("%d:%d %d:%d", &H, &M, &h, &m );

        start = H * 60 + M;
        end = h * 60 + m;

        if( start > end ) swap( start, end );

        scanf("%d:%d %d:%d", &H, &M, &h, &m );

        x = H * 60 + M;
        y = h * 60 + m;

        if( end < x || y < start ) printf("Case %d: Hits Meeting\n", i);
        else printf("Case %d: Mrs Meeting\n", i);
    }



    return 0;
}
