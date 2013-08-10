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
#define cr clear
#define pii pair< int, int >
#define loop(N) for(int i=0; i<N; ++i)
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
#define show(A, N) for(int i=0; i<N; ++i) cout << A[i] << ' '
#define dloop(N, M) for(int i=0; i<N; ++i) for(int j=0; j<M; ++j)
#define dshow(A, N, M) for(int i=0; i<N; ++i){ for(int j=0; j<M; ++j) cout << A[i][j] << ' '; cout << endl; }
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 35
#define INF (1<<20)
#define DEBUG if(1)
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, e, w, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int Tri(int a, int b, int c){
    printf("%d %d %d\n",a,b,c);

    if( a > N or b > N or c > N ) return 0;
    int sum = 0;
    if( a+b > c ) sum = 1;

    sum += Tri( a, b, c+1 );
   // sum += Tri( a, b+1, c );
   // sum += Tri( a+1, b, c );

    return sum;
}

//---------------------------------------------------->
int main()    //11401
{
    register int i, j, k=1, l=0;
    DEBUG freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->


    while(cin >> N) cout << Tri(1, 2, 3) << endl;


    return 0;
}
