#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#include<ctime>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn(int) scanf("%d\n",&int)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define size 200
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum;
char ch;

int main()
{
    //11636
    register int i, j=1, k, l;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    while(si(N) && N>=0)
    {
        sum = ceil(log(N)/log(2));
        printf("Case %d: %d\n",j++,sum);
    }

    return 0;
}
