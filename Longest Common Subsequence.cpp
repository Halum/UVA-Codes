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
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
#define CLR(v, n) for(int i=0; i<n; ++i)v[i].clear()
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 1010
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
char a[SIZE];
char b[SIZE];

int mat[SIZE][SIZE];

int LCS(int i,int j){
    if(!a[i] or !b[j]) return 0;
    if(mat[i][j] != -1) return mat[i][j];

    if(a[i] == b[j]) mat[i][j] = 1 + LCS(i+1, j+1);
    else mat[i][j] = max( LCS(i+1, j), LCS(i, j+1) );

    return mat[i][j];
}
//---------------------------------------------------->
int main()    //10405
{
    register int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    while(gets(a) != NULL){
        gets(b);
        ms(mat, -1);
        cout << LCS(0,0) << endl;
    }


    return 0;
}
