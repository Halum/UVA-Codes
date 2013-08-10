//572
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
int T, N, len, sum, x, y;
char ch;
void chk(char a[][110], int r, int c, int i, int j)
{
    if(i==r || j==c || i<0 || j<0) return;
    else if(a[i][j]=='@')
    {
        a[i][j]='*';
        chk(a,r,c,i+1,j);
        chk(a,r,c,i-1,j);
        chk(a,r,c,i,j+1);
        chk(a,r,c,i,j-1);
        chk(a,r,c,i+1,j+1);
        chk(a,r,c,i+1,j-1);
        chk(a,r,c,i-1,j+1);
        chk(a,r,c,i-1,j-1);
    }
}

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    char a[110][110];
    int r, c, sum;
    while(1)
    {
        scanf("%d%d",&r,&c);
        if(r==0) break;
        sc(ch);

        fc(i,r)
        {
            fc(j,c)
            sc(a[i][j]);
            sc(ch);
        }
        sum = 0;

        fc(i,r)
        fc(j,c)
        if(a[i][j]=='@')
        {
            sum++;
            chk(a, r, c, i, j);
        }
        pi(sum), pn;
    }

    return 0;
}
