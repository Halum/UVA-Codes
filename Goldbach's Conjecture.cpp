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
#define Z 1000000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
bool prime[Z];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    unsigned int root=sqrt(Z);
    memset(prime, 1, sizeof prime);
    for(i=2; i<=root;)
    {
        if(prime[i])
            for(j=i+i; j<Z; j+=i)
                if(prime[j]) prime[j]=0;

        for(i++; !prime[i]; i++);
    }

    while(scanf("%d",&N) && N)
    {
        for(i=3; i<=N/2; i++)
            if(prime[i] && prime[N-i]){
                printf("%d = %d + %d\n",N,i,N-i);
                break;
            }
        if(i>N/2) printf("Goldbach's conjecture is wrong.\n");
    }


    return 0;
}
