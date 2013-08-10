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
#define SIZE 1000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy, num1[SIZE], num2[SIZE], result[SIZE];
bool check;

long long Square(long long int N)
{
    return N*N;
}

long long int BigMod(long long int B, long long int P, long long int M)
{
    if(P==0) return 1;

    else if(P%2==0) return Square(BigMod(B, P/2, M)) % M;

    else return ((B%M) * BigMod(B, P-1, M)) %M;
}


int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL b, p, m;

    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF)
        cout<<BigMod(b, p, m)<<endl;;



    return 0;
}
