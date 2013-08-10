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
int mat[10][10];

void findMove(int x1, int y1, int x2, int y2)
{
    if(x1==x2 and y1==y2) return;

    queue< pair<int, int> > Q;
    int x, y;
    pair< int, int> u;

    u.first=x1;
    u.second=y1;

    Q.push(u);

    while(!Q.empty()){
        u = Q.front();
        Q.pop();

        x=u.first+2, y=u.second+1;
        if(x<=8 and y<=8 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        y=u.second-1;
        if(x<=8 and y>0 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        x=u.first-2, y=u.second-1;
        if(x>0 and y>0 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        y=u.second+1;
        if(x>0 and y<=8 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        x=u.first+1, y=u.second+2;
        if(x<=8 and y<=8 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        x=u.first-1;
        if(x>0 and y<=8 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        x=u.first-1, y=u.second-2;
        if(x>0 and y>0 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));

        x=u.first+1;
        if(x<=8 and y>0 and !mat[x][y]) mat[x][y]+=mat[u.first][u.second]+1, Q.push(make_pair(x, y));
    }
}
//---------------------------------------------------->
int main()    //439
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char a, b;

    while(scanf("%c%d%c%c%d%c",&a,&x,&ch,&b,&y,&ch) != EOF){
        for(i=0; i<10; ++i) memset(mat[i], 0, sizeof mat[i]);

        mat[x][a-96]=0;

        findMove(x,a-96, y,b-96);

        printf("To get from %c%d to %c%d takes %d knight moves.\n", a,x,b,y,mat[y][b-96]);
    }


    return 0;
}
