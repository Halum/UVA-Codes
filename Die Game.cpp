
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
    int a, b, c;
    char comand[10];
    while(scanf("%d\n",&N) && N)
    {
        a=1, b=2, c=3;

        fi(i,N)
        {
            gets(comand);
            if(comand[0]=='n')
            {
                l = b;
                b = a;
                a = 7-l;
            }
            else if(comand[0]=='e')
            {
                l = a;
                a = c;
                c = 7-l;
            }
            else if(comand[0]=='s')
            {
                l = a;
                a = b;
                b = 7-l;
            }
            else if(comand[0]=='w')
            {
                l = c;
                c = a;
                a = 7-l;
            }
        }
        printf("%d\n",a);

    }


    return 0;
}

