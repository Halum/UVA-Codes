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
int T, N, len, sum;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    //10019
    int b, a[15];
    char num[15];

    sn(T);
    fi(k,T)
    {
        gets(num);
        N = j = atoi(num);
        b = 0;
        for(;;)
        {
            l = N%2;
            if(l==1) b++;
            N /= 2;
            if(N<2)
            {
                if(N==1) b++;
                break;
            }
        }
        printf("%d ",b);
        b = 0;

        sum = num[0]-48;

        for(i=0; i<strlen(num)-1; i++)
            sum = sum*16 + num[i+1]-48;

        N = sum;
        for(;;)
        {
            l = N%2;
            if(l==1) b++;
            N /= 2;
            if(N<2)
            {
                if(N==1) b++;
                break;
            }
        }
        pi(b), pn;
    }

    return 0;
}
