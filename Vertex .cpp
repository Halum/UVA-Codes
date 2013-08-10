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
#define SIZE 101
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
//char ch, dum, *ptr;
//bool check;
//---------------------------------------------------->
bitset<SIZE> visit;
vector<int> G[SIZE];

void DFS( int n )
{
    int len = G[n].size();
    for( int i = 0; i < len; ++i )
    {
        if( visit[ G[n][i] ] )
        {
            int temp = G[n][i];
            visit[temp] = false;
            DFS( temp );
        }
    }
}
//---------------------------------------------------->
int main()    // 280
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
//---------------------------------------------------->
    while( scanf("%d",&T) && T )
    {
        for( i = 1; i <= T; ++i )
            G[i].clear();

        while( scanf("%d",&N) && N )
        {
            while( scanf("%d",&x) && x)
            G[N].push_back( x );
        }

        scanf("%d",&N);

        while( N-- )
        {
            scanf("%d",&x);
            visit.set();
            DFS( x );

            sum = T - ( SIZE - visit.count() );

            printf("%d", sum);

            for( i = 1; i <= T; ++i )
                if( visit[i] )
                    printf(" %d", i);
            pn;
        }
    }


    return 0;
}
