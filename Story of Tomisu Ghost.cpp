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
#define SIZE 1000003
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
vector <int> occur[SIZE];
//---------------------------------------------------->
int main()    //11977
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int m, n;

    while( scanf("%d%d", &n ,&m) != EOF )
    {
        for( i = 1; i <= n; ++i )
        {
            scanf("%d",&x);
            occur[x].push_back( i );
        }

        for( i = 0; i < m; ++i )
        {
            scanf("%d%d", &x, &y);

            if( occur[y].size() < x )
                puts("0");
            else
                printf("%d\n",occur[y][x-1] );
        }
    }

    return 0;
}

