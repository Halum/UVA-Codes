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
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;

int main()
{
    register int i, j, k, l;
    int t, n;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int max, rank[10];
    char x[10][101];

    sn(t);
    fi(j,t)
    {
        max = 0;
        fc(i,10)
        {
            gets(x[i]);
            fc(k,strlen(x[i]))
            {
                if(isdigit(x[i][k]))
                {
                    rank[i] = atoi(&x[i][k]);
                    break;
                }
            }
            if(rank[i]>max) max = rank[i];
        }

        printf("Case #%d:\n",j);

        fc(i,10)
        {
            if(max==rank[i])
            {
                fc(k,strlen(x[i]))
                {
                    if(isalpha(x[i][k]) || ispunct(x[i][k]))
                    pc(x[i][k]);
                }
                pn;
            }
        }
    }
    return 0;
}

