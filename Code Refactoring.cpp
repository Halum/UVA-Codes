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
#define Z 210000005
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y,pen, cary;
char ch, dummy;
bool check;
////
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    cin>>T;
    int rem[2];
    for(j=1; j<=T; j++)
    {
        scanf("%d",&N);
        printf("Case #%d: %d = ",j,N);
        for(i=2,k=0; i<=N; i++)
        {
            if(N%i==0) rem[k++]=i;
            if(k==2) break;
        }
        printf("%d * %d = %d * %d\n",rem[0],N/rem[0],rem[1],N/rem[1]);
    }


    return 0;
}

