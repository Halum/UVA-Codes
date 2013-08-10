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
    int x,y;
    double result;
    char a[30];
    while(gets(a)!=NULL)
    {
        len = strlen(a);
        sum = 0;
        fc(i,len)
        {
            if(islower(a[i]))
             sum += a[i]-96;
            else if(isupper(a[i]))
                sum += a[i]-64;
        }

        while(1)
        {
            len = log10(sum)+1;
            if(len==1) break;
            N=0;
            for(i=1; i<=len; i++)
            {
                N += sum%10;
                sum /= 10;
            }
            sum = N;
        }
        x = sum;

        gets(a);
        len = strlen(a);
        sum = 0;
        fc(i,len)
        {
            if(islower(a[i]))
             sum += a[i]-96;
            else if(isupper(a[i]))
                sum += a[i]-64;
        }

        while(1)
        {
            len = log10(sum)+1;
            if(len==1) break;
            N=0;
            for(i=1; i<=len; i++)
            {
                N += sum%10;
                sum /= 10;
            }
            sum = N;
        }
        y = sum;

        if(x>y) result = (double)y*100/x;
        else result = (double)x*100/y;

        printf("%.2lf %%\n",result);
    }
    return 0;
}
