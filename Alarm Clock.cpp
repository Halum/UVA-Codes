#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
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
#define size 20
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int T, N, len, sum;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int H,M,h,m,strt;
    while(scanf("%d%d%d%d",&h,&m,&H,&M))
    {
        if(h==0 && H==0 && m==0 && M==0) break;
        strt = h*60+m;
        sum=0;
        if(H<h)
        {
            H=h-H;
            H=24-H;
            sum = h*60+H*60+M;
        }
        else if(H==h && M<m)
        {
            M=m-M;
            M=60-M;
            sum = h*60+m+23*60+M;
        }
        else if(h==H && m==M)
            sum = h*60+m;
        else
            sum = H*60+M;


        printf("%d\n",sum-strt);
    }


    return 0;
}
