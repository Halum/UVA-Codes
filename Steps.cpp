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
int T, N, len, sum, a, b, c, x, y, z, r;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    si(T);
    fi(k,T)
    {
        scanf("%d%d",&a,&b);

        x = b-a;;
        if(x==0) pi(0), pn;
        else if(x==1) pi(1), pn;
        else if(x==2) pi(2), pn;
        else
        {
            for(i=1; ; i++)
            {
                y = i*(i+1);

                if(2*(i+1)>=x-y)
                {
                    if(i+1>=x-y)
                    {
                        pi(2*i+1), pn;
                        break;
                    }
                    else if(i+1<x-y)
                    {
                        pi(2*i+2), pn;
                        break;
                    }
                }

            }
        }
    }
    return 0;
}

