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
#define eps 1e-12
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 11889
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char str[50];
    string sp;
    map< string , int >tree;
    map< string , int >::iterator it;
    double ans, sz;

    scanf("%d\n",&T);

    while( T-- )
    {
        if( l ) l = 0;
        else printf("\n");

        sz = 0;
        tree.clear();

        while( gets(str) )
        {
            if( !str[0] ) break;
            sp = str;
            tree[ sp ]++;
            sz++;
        }

        //cout << sz << endl;

        for( it = tree.begin(); it!=tree.end(); it++ )
        {
            ans = (double)(*it).second / sz * 100;
            cout << (*it).first << ' ';
            printf("%.4lf\n",ans);
        }
    }


    return 0;
}
