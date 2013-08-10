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
#define Z 50
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
//int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL fib[55],N,T;
    fib[1]=fib[2]=1;
    for(i=3; i<=53; i++)
        fib[i] = fib[i-1]+fib[i-2];

    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>N;
        printf("Scenario #%d:\n%lld\n\n",i,fib[N+2]);
    }

    return 0;
}

