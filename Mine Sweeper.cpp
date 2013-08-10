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
    int T, N, chk;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int count;
    char x[10][10], y[10][10];
    si(T);

    for(j=1; j<=T; j++)
    {
        sn(N);

        fc(i,N)
        {
            fc(k,N)
                sc(x[i][k]);

            sc(ch);
        }
        fc(i,N)
        {
            fc(k,N)
                sc(y[i][k]);

            sc(ch);
        }
        chk = 0;
        fc(i,N)
        {
            fc(k,N)
            {
                count = 0;
                if(x[i][k]=='.' && y[i][k]=='x')
                {
                    if(k+1<N && x[i][k+1]=='*') count++;
                    if(k-1>=0 && x[i][k-1]=='*') count++;
                    if(i+1<N && x[i+1][k]=='*') count++;
                    if(i-1>=0 && x[i-1][k]=='*') count++;
                    if(k+1<N && i+1<N && x[i+1][k+1]=='*') count++;
                    if(k-1>=0 && i+1<N && x[i+1][k-1]=='*') count++;
                    if(k+1<N && i-1>=0 && x[i-1][k+1]=='*') count++;
                    if(k-1>=0 && i-1>=0 && x[i-1][k-1]=='*') count++;

                    x[i][k] = count+48;
                }
                else if(x[i][k]=='*' && y[i][k]=='x') chk=1;
            }
        }
        if(chk)
            fc(i,N)
            {
                fc(k,N)
                    pc(x[i][k]);
                pn;
            }
        else
        {
            fc(i,N)
            {
                fc(k,N)
                {
                    if(x[i][k]=='*') printf(".");
                    else pc(x[i][k]);
                }
                pn;
            }
        }
        if(j<T) pn, sc(ch);

    }
    return 0;
}

