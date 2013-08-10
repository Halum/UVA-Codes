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

int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    while(si(N)!=EOF)
    {
        if(N>13) printf("Overflow!\n");
        else if(N<0 && N%2) printf("Overflow!\n");
        else if(N<0) printf("Underflow!\n");
        else if(N<8) printf("Underflow!\n");
        else if(N==8) cout<<"40320\n";
        else if(N==9) cout<<"362880\n";
        else if(N==10) cout<<"3628800\n";
        else if(N==11) cout<<"39916800\n";
        else if(N==12) cout<<"479001600\n";
        else cout<<"6227020800\n";
    }


    return 0;
}

