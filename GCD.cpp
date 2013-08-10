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
#define Z 500
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y, pen, cary;
char ch, dummy;
bool check;
////
long long int gcd[502];
long long int GCD(long long int a,long long  int b);
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL N,sum;

    for(k=1; k<=Z; k++)
    {
        gcd[k]+=gcd[k-1];
        for(i=1; i<k; i++)
                gcd[k] += GCD(i,k);
    }

    while(scanf("%lld",&N) && N)
        printf("%lld\n",gcd[N]);

    return 0;
}
long long int GCD(long long int a,long long  int b)
{
    if(a%b==0) return b;
    else return GCD(b, a%b);
}
