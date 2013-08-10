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
#define SIZE 10002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy;
bool check;
//---------------------------------------------------->
int Knight(int m, int n)
{
    register int MAX, MIN, res = m*n;

    if(m==1 || n==1) return max(m, n);
    else if(res==4 || res==6) return 4;

    MIN = min(m, n);
    MAX = max(m, n);
    if(MIN==2)
    {
        int mod = res % 8;
        res /=  8;
        res *=  4;
        if(mod>2) return res+4;
        else return res+mod;
    }
    else if(res%2)
      return  (res+1)/2;
    else
        return res/2;
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    while(cin>>x>>y && y+x)
        printf("%d knights may be placed on a %d row %d column board.\n",Knight(x,y), x, y);


    return 0;
}
