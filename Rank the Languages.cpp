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
int T, N, len, sum, x, y, r, c;
char ch;
void chk(char map[][size], int r, int c, int i, int j, char ch)
{
    if(i<0 || j<0 || i==r || j==c) return;
    else if(map[i][j]==ch)
    {
        map[i][j]='*';

        chk(map, r, c, i+1, j, ch);
        chk(map, r, c, i-1, j, ch);
        chk(map, r, c, i, j+1, ch);
        chk(map, r, c, i, j-1, ch);
        return;
    }
}

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    char map[size][size], alp[27];
    int a[26];


    si(T);
    fi(l,T)
    {
        scanf("%d%d\n",&r,&c);

        fc(i,r)
        {
            fc(j,c)
                sc(map[i][j]);
            sc(ch);
        }
        for(i='a', j=0; i<='z'; i++, j++)
        alp[j]=i, a[j]=0;

        fc(i,r)
        {
            fc(j,c)
                if(islower(map[i][j]))
                {
                    a[map[i][j]-97]++;
                    chk(map, r, c, i, j, map[i][j]);
                }
        }
        printf("World #%d\n",l);

        for(i=0; i<26-1; i++)
            for(j=0; j<26-1-i; j++)
                if(a[j]<a[j+1])
                {
                    a[j]=a[j]^a[j+1];
                    a[j+1]=a[j]^a[j+1];
                    a[j]=a[j]^a[j+1];
                    alp[j]=alp[j]^alp[j+1];
                    alp[j+1]=alp[j]^alp[j+1];
                    alp[j]=alp[j]^alp[j+1];
                }
                else if((a[j]==a[j+1]) && (alp[j]>alp[j+1]))
                    {
                        alp[j]=alp[j]^alp[j+1];
                        alp[j+1]=alp[j]^alp[j+1];
                        alp[j]=alp[j]^alp[j+1];
                    }
        for(i=0; i<26; i++)
            if(a[i]) printf("%c: %d\n",alp[i],a[i]);
    }

    return 0;
}
