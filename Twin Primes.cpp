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
#define size 20000000
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen;
char ch;
bool prime[size];
UI twin[110000];
void genprime();
void gentwin();
int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    UI n;
    genprime();
    gentwin();
    while(scanf("%u",&n)!=EOF)
        printf("(%d, %d)\n",twin[n],twin[n]+2);

    return 0;
}
void genprime()
{
    register unsigned int i, j;
    unsigned int root=sqrt(size);
    memset(prime, 1, sizeof prime);
    for(i=2, j=1; i<root;)
    {
        if(prime[i])
            for(j=i+i; j<size; j+=i)
                if(prime[j])    prime[j]=0;

        for(i++; !prime[i]; i++);
    }
}
void gentwin()
{
    register unsigned int i, j;
    for(i=2,j=1; i<size; i++)
        if(prime[i] && prime[i+2])
            twin[j++] = i;
}
