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
#define pii pair< int, int >
#define loop(N) for(int i=0; i<N; ++i)
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
#define show(A, N) for(int i=0; i<N; ++i) cout << A[i] << ' '
#define dloop(N, M) for(int i=0; i<N; ++i) for(int j=0; j<M; ++j)
#define dshow(A, N, M) for(int i=0; i<N; ++i){ for(int j=0; j<M; ++j) cout << A[i][j] << ' '; cout << endl; }
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 1002
#define INF (1<<20)
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int t, len, n, sum, x, y, e, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int c[SIZE], w[SIZE], cap, dp[SIZE][102];

int Knap(int i, int taken){
    if(i==n) return 0;
    if(dp[i][taken] != -1) return dp[i][taken];
    int a, b;
    if(taken + w[i] <= cap){
        a = c[i] + Knap(i+1, taken+w[i]);
    }else{
        a = 0;
    }
    b = Knap(i+1, taken);
    dp[i][taken] = max(a, b);

    return dp[i][taken];
}
//---------------------------------------------------->
int main()    //10130
{
    register int i, j, k=1, l=0;
    #define DEB if(0)
    DEB freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> t;
    int g;

    while(t--){
        cin >> n;
        loop(n) cin >> c[i] >> w[i];
        cin >> g;
        sum = 0;
        while(g--){
            ms(dp, -1);
            cin >> cap;
            sum += Knap(0, 0);
        }

        cout << sum << endl;
    }


    return 0;
}
