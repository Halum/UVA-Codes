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
#define Z 46350
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
char ch, dummy;
bool bprim[Z];
int iprim[Z];
void GenPrime();
void PrimeFactor(int n);
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int N,T;
    GenPrime();

    while(scanf("%d",&N) && N){
        printf("%d =",N);
        if(N==-1 || N==1) printf(" %d\n",N);
        else if(N<0){
            printf(" -1 x"), N*=-1;
            PrimeFactor(N);
        }
        else PrimeFactor(N);
    }

    return 0;
}

void GenPrime()
{
    register int i,j;
    int root=sqrt(Z);
    memset(bprim, 1, sizeof bprim);

    for(i=2; i<root;)
    {
        if(bprim[i])
            for(j=i+i; j<=Z; j+=i)
                if(bprim[j]) bprim[j]=0;

        for(i++; !bprim[i]; i++);
    }
    for(j=0, i=2; i<=Z; i++)
        if(bprim[i]) iprim[j++]=i;
}
void PrimeFactor(int n)
{
    register int i,j;

    for(i=j=0; iprim[i]<=sqrt(n); i++){
        while(!(n%iprim[i])){
            if(j) printf(" x %d",iprim[i]);
            else  printf(" %d",iprim[i]), j=1;
            n/=iprim[i];
        }
    }
    if(n^1 && !j) printf(" %d",n);
    else if(n^1 && j) printf(" x %d",n);
    printf("\n");
}
