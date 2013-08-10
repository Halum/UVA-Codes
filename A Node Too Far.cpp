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
#define SIZE 35
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
vector<int> node[SIZE];
bitset<SIZE> visit;

int BFS(int a, int lim)
{
    int d[SIZE];
    memset(d, 0, sizeof d);
    queue<int> q;
    total = 0;
    visit.reset();
    q.push(a);

    visit[a] = true;
    d[a] = 0;

    while(!q.empty()){
        int start = q.front();
        q.pop();
        for(int adj = 0; adj < node[start].size(); ++adj){
            int tmp = node[start][adj];
            if(!visit[tmp]){
                q.push(tmp);
                visit[tmp] = true;
                d[tmp] = d[start]+1;
            }
        }
    }

    for(int i=1; i<=N; ++i)
        if(d[i] > lim || !d[i] ) total++;

    return total;
}
//---------------------------------------------------->
int main()    //336
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    map<int, int> val;

    while(cin>>T && T){
        val.clear();
        for(i=0; i<SIZE; ++i) node[i].clear();
        N = 0;

        for(i=0; i<T; ++i){
            cin >> x >> y;

            if(!val[x]) val[x] = ++N;
            if(!val[y]) val[y] = ++N;

            x = val[x];
            y = val[y];

            node[x].push_back(y);
            node[y].push_back(x);
        }

        while(cin>>x>>y && (x+y)){
            temp = x;
            x = val[x];
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++l, BFS(x, y)-1, temp, y);
        }
    }



    return 0;
}
