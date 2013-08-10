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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define eps 1e-7
#define SIZE 12
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dum;
bool check;
//---------------------------------------------------->
bool chek ( int x, int y, int a, int b )
{
    int n = ( a - x ) * ( y - y + 1 ) - ( x - x + 1 ) * (  b - y );
    if( !n ) return true;
    n = ( a - x ) * ( y - y - 1 ) - ( x - x + 1 ) * (  b - y );
    if( !n ) return true;
    return false;
}
//---------------------------------------------------->
int main()    // 11494
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int a, b;

    while ( cin>>x>>y>>a>>b && x+y+a+b )
    {
        if( x == a && y == b) cout << 0 << endl;
        else if( x == a || y == b ) cout << 1 << endl;
        else if ( chek ( x, y, a, b) ) cout << 1 <<endl;
        else cout << 2 << endl;
    }

    return 0;
}
