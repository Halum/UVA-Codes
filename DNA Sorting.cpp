#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#include<ctime>
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
#define size 200
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen;
char ch;

int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char ptr[60];
    struct DNA
    {
        char str[60];
        int sort;
    }x[110], tem;

    si(T);
    while(T--)
    {
        if(l) pn;
        else l=1;
        scanf("%d%d",&len,&N), sn;
        for(i=0; i<N; i++) x[i].sort=0;

        for(k=0; k<N; k++)
        {
            gets(x[k].str);
            strcpy(ptr,x[k].str);

            for(i=0; i<len-1; i++)
                for(j=0; j<len-1-i; j++)
                    if(ptr[j]>ptr[j+1])
                    {
                        ch = ptr[j];
                        ptr[j] = ptr[j+1];
                        ptr[j+1] = ch;
                        x[k].sort++;
                    }
                    cout<<k<<endl;
        }
        for(i=0; i<N-1; i++)
            for(j=0; j<N-1-i; j++)
                if(x[j].sort>x[j+1].sort)
                {
                    tem = x[j];
                    x[j] = x[j+1];
                    x[j+1] = tem;
                }
        for(i=0; i<N; i++)
            printf("%s\n",x[i].str);
    }

    return 0;
}
