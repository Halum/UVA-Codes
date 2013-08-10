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
#define loop(N) for(int i=0; i<N; ++i)
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
#define CLR(v, n) for(int i=0; i<n; ++i)v[i].clear()
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 110
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
int a[SIZE], b[SIZE], mat[SIZE][SIZE];

int LCS(int i, int j){
    if(i==x or j==y) return 0;

    if(mat[i][j] != -1) return mat[i][j];

    if(a[i] == b[j]) mat[i][j] = 1 + LCS(i+1, j+1);
    else mat[i][j] = max( LCS(i+1, j), LCS(i, j+1) );

    return mat[i][j];
}

//---------------------------------------------------->
int main()    //
{
    register int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    while( cin >> x >> y and x+y ){
        loop(x) cin >> a[i];
        loop(y) cin >> b[i];

        ms(mat, -1);

        printf("Twin Towers #%d\n", k++);
        printf("Number of Tiles : %d\n\n", LCS(0, 0));

    }


    return 0;
}
