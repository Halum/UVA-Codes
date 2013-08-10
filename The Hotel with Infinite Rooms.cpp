
#include<stdio.h>
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
#define Z 100
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y,pen, cary;
char ch, dummy;
bool check;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL s,d,res,b,root;

    while(scanf("%lld%lld",&s,&d)!=EOF)
    {
        b = 2*s-1;
        root = b*b + 8*d;
        res = sqrt(root);
        if(res*res==root)
            res = (res-b)/2+s-1;
        else
            res = (res-b)/2+s;
        printf("%lld\n",res);
    }


    return 0;
}

