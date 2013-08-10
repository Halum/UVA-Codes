#include<stdio.h>
#include<iostream>
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
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define MAX(a,b) a>b ? a:b
#define MIN(a,b) a<b ? a:b
#define size 1000000
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
//int T, N, len, sum, x, y, pen;
char ch;
int main()
{
    register int i, j, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL x,y,A;
    for(l=1; scanf("%lld%lld",&x,&y)!=EOF; l++)
    {
        if(x<0 && y<0) break;
        A = x;
        for(i=1; ;i++)
        {
            if(x==1) break;
            else if(x%2==0) x/=2;
            else x = x*3+1;
            if(x>y) break;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",l,A,y,i);
    }

    return 0;
}
