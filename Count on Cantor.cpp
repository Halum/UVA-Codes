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
#define size 200
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int T, N, len, sum;
char ch;

int row[10000000], colum[10000000];
int main()
{
    register int i, j, k, l;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);

    int cantor;

    for(cantor=2,i=j=1;;)
    {
        if(cantor>10000001) break;
        row[cantor] = i;
        colum[cantor++] = ++j;
        j--, i++;

        for(;j>=1; j--,i++)
        {
            if(cantor>10000001) break;
            row[cantor] = i;
            colum[cantor++] = j;
        }
        if(cantor>10000001) break;
        row[cantor] = i;
        colum[cantor++] = ++j;
        i--, j++;

        for(; i>=1; i--,j++)
        {
            if(cantor>10000001) break;
            row[cantor] = i;
            colum[cantor++] = j;
        }
        i++, j--;
    }
    row[1]=colum[1]=cantor=1;
    while(scanf("%d",&N)!=EOF)
    {
        printf("TERM %d IS %d/%d\n",N,row[N],colum[N]);

    }

    return 0;
}
