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
bool isBi;

bool bfsColor(int s)
{
    int color[205], u, v, i, visit[205];
    memset(color, 0, sizeof color);
    memset(visit, 0, sizeof visit);
    queue<int> Q;

    Q.push(s);
    color[s]=1;
    isBi=true;
    visit[s]=1;

    while(!Q.empty()){
        v = Q.front();
        Q.pop();

        for(i=0; i<adj[v].size(); ++i){
            u = adj[v][i];

            if(!visit[u]){
                Q.push(u);
                visit[u]=1;
            }

            if(color[v]==1){
                if(color[u]==0) color[u]=2;
                else if(color[u]==1){
                    isBi=false;
                    break;
                }
            }else if(color[v]==2){
                if(color[u]==0) color[u]=1;
                else if(color[u]==2){
                    isBi=false;
                    break;
                }
            }
        }
        if(!isBi) break;
    }

    return isBi;
}

//---------------------------------------------------->
int main()    //10004
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    while(cin>>N and N){
        cin >> l;
        for(i=0; i<205; ++i) adj[i].clear();

        for(i=0; i<l; ++i){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        if(bfsColor(0)) cout << "BICOLORABLE.\n";
        else  cout<<"NOT BICOLORABLE.\n";
    }


    return 0;
}

