/*
ID: my.lost1
PROG: test
LANG: C++
*/
#include<cstdio>
#include<iostream>
#include<sstream>
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
#include<map>
//---------------------------------------------------->
#define sdum scanf("%c",&dummy)
#define pf printf
#define sf scanf
#define pn printf("\n")
#define sn scanf("\n")
#define pb push_back
#define ps push
#define pp pop
#define fr front
#define em empty
#define mp make_pair
#define sz size
#define fs first
#define sc second
#define cl clear
#define tp top
#define pq priority_queue
#define pii pair< long long int, long long int >
#define loop(N) for(long long int i=0; i<N; ++i)
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
#define show(A, N) for(long long int i=0; i<N; ++i) cout << A[i] << ' '
#define dloop(N, M) for(long long int i=0; i<N; ++i) for(long long int j=0; j<M; ++j)
#define dshow(A, N, M) for(long long int i=0; i<N; ++i){ for(long long int j=0; j<M; ++j) cout << A[i][j] << ' '; cout << endl; }
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 110
#define INF (1<<30)
#define DEB if(0)
//---------------------------------------------------->
typedef long double LD;
using namespace std;
long long int t, len, n, sum, x, y, e, w, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
vector< pii > node[SIZE];
long long int par[SIZE];
long long int cost[SIZE];
bool mat[SIZE][SIZE], visited[SIZE];

void Dijkstra(long long int s){
    pq< pii, vector< pii >, greater< pii > >Q;
    long long int u, v, w;
    loop(SIZE){
        visited[i] = 0;
        cost[i] = INF;
    }

    cost[s] = 0;
    Q.ps(mp(0,s));

    while(!Q.em()){
        u = Q.tp().sc;
        Q.pp();

        DEB printf("From %d : ",u+1);
        loop(node[u].sz()){
            v = node[u][i].sc, w = node[u][i].fs;

            if(cost[v] > cost[u]+w and !mat[u][v]){
                par[v] = u;
                cost[v] = cost[u]+w;
                Q.ps(mp(cost[v], v));
                DEB printf(" %d(%d)",v+1,w);
            }
        }
        DEB cout << endl;
    }
}

//---------------------------------------------------->
int main()    //10806
{
    register long long int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    while(cin >> n and n){
        loop(SIZE) node[i].cl();

        cin >> e;
        loop(e){
            cin >> x>>y>>w;

            node[x-1].pb(mp(w,y-1));
            node[y-1].pb(mp(w,x-1));
        }

        ms(mat, 0);

        Dijkstra(0);

        ans = cost[n-1];
        DEB cout << "................" << endl;
        if(ans == INF){
            cout << "Back to jail\n";
            continue;
        }

        for(long long int u = n-1, v; u; u = v){ // deleting the sortest path
            v = par[u];
            mat[v][u] = true;
            loop(node[u].sz()){
                if(node[u][i].sc == v) node[u][i].fs *= -1;
            }
        }

        Dijkstra(0);

        if(cost[n-1] == INF) cout << "Back to jail\n";
        else cout << ans + cost[n-1] << endl;
    }


    return 0;
}

