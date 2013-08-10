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
    int n, count;
    int i, j, total=1, prime[78500];
    prime[0]=2;
    for(i=3; i<=1000000; i++)
    {
        for(j=2; j<=sqrt(i); j++)
            if(i%j==0)
                break;

        if(j>sqrt(i))
            prime[total++] = i;
    }

    while(scanf("%d",&n) && n)
    {
        for(i=0, count=0; prime[i]<=n; i++)
            if(n%prime[i]==0) count++;


        printf("%d : %d\n",n,count);
    }

    return 0;

}

