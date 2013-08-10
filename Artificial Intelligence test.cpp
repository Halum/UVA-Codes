#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#include<deque>
#include<set>
#include<algorithm>
#include<ctime>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define Z 1000000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
int main()
{
    register int i, j, k, l=0;
    freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char str[1000], p[10];
    float PO,V,I, res;
    scanf("%d%c",&T,&ch);
    for(k=1; k<=T; k++)
    {
        gets(str);
        len = strlen(str);
        printf("Problem #%d\n",k);

        for(i=0,PO=V=I=-100; i<len; i++)
        {
            if(str[i]=='U')
            {
                i+=2;
                for(j=0; (isdigit(str[i]) || str[i]=='.' || str[i]=='-'); j++)
                    p[j] = str[i++];

                p[j]='\0';
                V = atof(p);
                ch = str[i];
                if(ch=='m') V/=1000;
                else if(ch=='k') V*=1000;
                else if(ch=='M') V*=1000000;
                if(V==-0) V=0;
                cout<<V<<"v";
            }
            else if(str[i]=='P')
            {
                i+=2;
                for(j=0; (isdigit(str[i]) || str[i]=='.' || str[i]=='-');j++)
                    p[j] = str[i++];

                p[j]='\0';
                PO = atof(p);
                ch = str[i];
                if(ch=='m') PO/=1000;
                else if(ch=='k') PO*=1000;
                else if(ch=='M') PO*=1000000;
                if(PO==-0) PO=0;
                cout<<PO<<"p";
            }
            else if(str[i]=='I')
            {
                i+=2;
                for(j=0; (isdigit(str[i]) || str[i]=='.' || str[i]=='-');j++)
                    p[j] = str[i++];

                p[j]='\0';
                I = atof(p);
                ch = str[i];
                if(ch=='m') I/=1000;
                else if(ch=='k') I*=1000;
                else if(ch=='M') I*=1000000;
                if(I==-0) I=0;
                cout<<I<<"i";
            }
        }
        if(I==-100) res=PO/V, printf("I=%.2fA\n\n",res);
        else if(V==-100) res=PO/I, printf("V=%.2fV\n\n",res);
        else res=V*I, printf("P=%.2fW\n\n",res);
    }

    return 0;
}
