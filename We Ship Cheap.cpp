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
#define SIZE 700
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
vector<string> node[SIZE];
map<string, bool> visit;
map<string, int> indx;
string par[SIZE];
int dis[SIZE], path;
string a, b;

void init()
{
    indx.clear();
    for(int i=0; i<SIZE; ++i) {node[i].clear(); par[i].clear();}
    len=path=0;
    visit.clear();
    memset(dis, 0, sizeof dis);
}

void getPath(string a, string b)
{
    if(a==b) {cout << a << " " << b << endl; return;}

    int len=1;
    vector<string> path;
    path.push_back(b);
    while(a!=b){
        path.push_back(par[indx[b]]);
        b=par[indx[b]];
        len++;
    }

    for(int i=len-1; i>0; --i) cout <<path[i]<<' '<<path[i-1]<<endl;

}

int BFS(string a, string b)
{
    queue<string> Q;
    string u, v;

    Q.push(a);
    visit[a]=true;

    while(!Q.empty()){
        u=Q.front();
        Q.pop();

        for(int i=0; i<node[indx[u]].size(); ++i){
            v=node[indx[u]][i];

            if(!visit[v]){
                Q.push(v);
                visit[v]=true;
                dis[indx[v]] = dis[indx[u]]+1;
                par[indx[v]] = u;
                if(v==b){
                    path=dis[indx[v]];
                    break;
                }
            }
        }
        if(path) break;
    }

    return path;

}
//---------------------------------------------------->
int main()    //762
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->


    while(scanf("%d",&N) != EOF){
        init();

        for(i=0; i<N; ++i){
            cin >> a >> b;

            if(!indx[a]) {indx[a] = len++;}
            if(!indx[b]) {indx[b] = len++;}

            node[indx[a]].push_back(b);
            node[indx[b]].push_back(a);
        }
        cin >> a >> b;

        if(!l) l=1;
        else cout<<endl;

        if(BFS(a,b)) getPath(a,b);
        else cout << "No route\n";
    }

    return 0;
}

