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
#define sn scanf("\n")
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
    bool chk[11];
    char str[10];
    memset(chk,1,sizeof chk);

    while(scanf("%d",&N) && N)
    {
        sn;
        gets(str);
        if(str[4]=='h')
        {
            for(i=N; i<11; i++)
                chk[i] = false;
        }
        else if(str[4]=='l')
        {
            for(i=N; i>0; i--)
                chk[i] = false;
        }
        else
        {
            if(chk[N]) printf("Stan may be honest\n");
            else printf("Stan is dishonest\n");
            memset(chk,1,sizeof chk);
        }
    }

    return 0;
}
