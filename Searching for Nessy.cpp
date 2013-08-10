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
    //freopen("b.txt","w",stdout);
    int m, n, t;
    si(t);
    fi(i,t)
    {
        scanf("%d%d",&n,&m);
        m/=3, n/=3;
        printf("%d\n",n*m);
    }

    return 0;
}

