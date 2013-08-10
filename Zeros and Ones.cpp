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
int T, N, len, sum, x, y, pen;
char ch;
int chk[size];
char str[size];
int main()
{
    register int i, j, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int a, b;
    while(gets(str)!=NULL)
    {
        printf("Case %d:\n",l++);
        len = strlen(str);
        chk[0]=1;
        for(i=1,j=1; i<len; i++)
        {
            if(str[i]!=str[i-1]) chk[i]=++j;
            else chk[i]=j;
        }
        scanf("%d",&N);
        for(i=1; i<=N; i++)
        {
            scanf("%d%d",&x,&y);
            j = MIN(x,y);
            k = MAX(x,y);
            if(j<0) j=0;
            if(k>=len) k=len-1;
            if(chk[j]==chk[k]) printf("Yes\n");
            else printf("No\n");
        }
        sc(ch);
    }

    return 0;
}
