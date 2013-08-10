#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d\n",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s\n",string)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int a[5];
int main()
{
    register int i, j, k, l;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int t, n, sum ,a, c;
    si(t);
    fi(i,t)
    {
        si(n);
        sum = 0;
        fi(j,n)
        {
            scanf("%d%d%d",&a,&c,&c);
            sum += a*c;
        }
        pi(sum);
    }


    return 0;

}

