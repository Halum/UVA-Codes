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
#define Z 31625
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
char ch, dummy;
bool bprim[Z];
int iprim[Z];
void GenPrime();
int DivCount(int n);
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int L,U,MAX,T,n,x;
    GenPrime();
    cin>>T;
    while(T--)
    {
        cin>>L>>U;
        MAX=0;
        for(i=L; i<=U; i++){
            x=DivCount(i);
            if(x>MAX) MAX=x, n=i;
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,U,n,MAX);
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
int DivCount(int n)
{
    register int c,div=1,i;
    for(i=0;iprim[i]<=sqrt(n);i++)
    {
        c=0;
        while(!(n%iprim[i])){
            c++;
            n=n/iprim[i];
        }
        div=div*(c+1);
        if(n==1)break;
    }
    if(n^1)div=div<<1;
    return div;
}
