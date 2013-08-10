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


int main()
{
    register int i, j, k, l;
    int T, N;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int m,n,count;
    char field[100][100];

    for(j=1; scanf("%d%d",&n,&m); j++)
    {
        if(n==0 && m==0) break;
        if(j>1) pn;
        printf("Field #%d:\n",j);

        sc(ch);

        fc(i,n)
        {
            fc(k,m)
                sc(field[i][k]);

            sc(ch);
        }
        fc(i,n)
        {
            fc(k,m)
            {
                count = 0;
                if(field[i][k]=='.')
                {
                    if(k+1<m && field[i][k+1]=='*') count++;
                    if(k-1>=0 && field[i][k-1]=='*') count++;
                    if(i+1<n && field[i+1][k]=='*') count++;
                    if(i-1>=0 && field[i-1][k]=='*') count++;
                    if(k+1<m && i+1<n && field[i+1][k+1]=='*') count++;
                    if(k-1>=0 && i+1<n && field[i+1][k-1]=='*') count++;
                    if(k+1<m && i-1>=0 && field[i-1][k+1]=='*') count++;
                    if(k-1>=0 && i-1>=0 && field[i-1][k-1]=='*') count++;

                    field[i][k] = count+48;
                }
            }
        }

        fc(i,n)
        {
            fc(k,m)
                pc(field[i][k]);
            pn;
        }
    }
    return 0;
}
