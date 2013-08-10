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
int T, N, len, sum, x, y, r, c;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    double H, U, D, F, SUM;
    while(scanf("%lf%lf%lf%lf",&H,&U,&D,&F))
    {
        if(H==0 && U==0 && D==0 && F==0) break;
        SUM = 0;
        F =  U*F/100;

        for(i=1; ;i++)
        {
                SUM += U;
                U -= F;
                if(U<0) U=0;
                if(SUM>H){
                    printf("success on day %d\n",i);
                    break;}
                else SUM -= D;

                if(SUM<0){
                    printf("failure on day %d\n",i);
                    break;}
        }
    }

    return 0;
}

