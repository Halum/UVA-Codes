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
#define INF 99999999
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
vector<int> adj[205];
bool visit[205], isBi;
char color[205];
int fst, scnd;

void init()
{
    int i;
    isBi=1;
    fst=scnd=sum=0;
    for(i=0; i<205; ++i){
        visit[i]=color[i]=0;
        adj[i].clear();
    }
}

void BFS(int s)
{
    queue<int> Q;
    int u, v, i;

    Q.push(s);
    color[s]=1;
    fst++;
    visit[s]=true;

    while(!Q.empty()){
        v = Q.front();
        Q.pop();

        for(i=0; i<adj[v].size(); ++i){
            u = adj[v][i];

            if(!visit[u]){
                Q.push(u);
                visit[u]=1;
            }

            if(!color[u]){
                if(color[v]==1){
                    color[u] = 2;
                    scnd++;
                }else{
                    color[u] = 1;
                    fst++;
                }
            }else if(color[u]==color[v]){
                isBi=false;
                break;
            }
        }
        if(!isBi) break;
    }
}

//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;
    int e;

    while(T--){
        cin >> N>>e;
        init();

        for(i=0; i<e; ++i){
            cin >>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for(i=0; i<N; ++i){
            fst=scnd=0;
            if(!visit[i]) BFS(i);
            if(!fst or !scnd) sum += max(fst, scnd);
            else sum += min(fst, scnd);
        }

        if(isBi)  cout << sum << endl;
        else cout << -1 << endl;
    }


    return 0;
}

