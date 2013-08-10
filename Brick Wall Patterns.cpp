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
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int i, j, k, n;
    lli fib[51];
    fib[1]=1, fib[2]=2;
    for(i=3; i<=50; i++)
        fib[i] = fib[i-1] + fib[i-2];

    while(scanf("%d",&n) && n)
        printf("%lld\n",fib[n]);

    return 0;

}
