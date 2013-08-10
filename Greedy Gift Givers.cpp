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
    register int i, j, k, l=0;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    char name[10][15], nam[15];
    int money[10], mon;

    while(scanf("%d",&N)!=EOF)
    {
        if(l) printf("\n");
        sc(ch);
        memset(money, 0, sizeof money);
        fc(i,N) ss(name[i]);

        for(i=1; i<=N; i++)
        {
            scanf("%s%c%d%d%c",nam,&ch,&mon,&T,&ch);

            for(j=0; j<N; j++)
                if(strcmp(name[j],nam)==0 && mon && T)
                {
                    money[j] -= (mon/T)*T;
                    break;
                }

            for(k=0; k<T; k++)
            {
                scanf("%s",nam,&ch);
                for(j=0; j<N; j++)
                    if(strcmp(name[j],nam)==0 && T && mon)
                    {
                        money[j] += mon/T;
                        break;
                    }
            }
        }
        fc(i,N) printf("%s %d\n",name[i],money[i]);
        l++;

    }


    return 0;
}

