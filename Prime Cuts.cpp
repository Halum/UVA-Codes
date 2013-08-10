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
#define Z 1000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen;
char ch, dummy;
bool prime[1000];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    memset(prime, 1, sizeof prime);
    int root=sqrt(Z);
    for(i=2; i<=root;)
    {
        if(prime[i])
            for(j=i+i; j<Z; j+=i)
                if(prime[j]) prime[j]=0;
        for(i++; !prime[i]; i++);
    }

    while(scanf("%d%d",&N,&x)!=EOF)
    {
        printf("%d %d:",N,x);
        int count, chk;
        for(i=1,count=0; i<=N; i++)
            if(prime[i]) count++;

        if(count%2) len = x*2-1, chk=count/2+1-(len-1)/2;
        else len = x*2, chk=count/2-(len-2)/2;
        if(len<=count)
        {
            for(i=1, j=0; j<len+chk-1; i++)
            {
                if(prime[i]) j++;
                if(j>=chk && prime[i]) printf(" %d",i);
            }
            cout<<endl<<endl;

        }
        else
        {
            for(i=1; i<=N; i++)
                if(prime[i]) printf(" %d",i);
            cout<<endl<<endl;
        }
    }


    return 0;
}
