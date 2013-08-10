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
#define Z 4800
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
char fib[4900][1050];
int freq[4900];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    fib[1][0]=fib[2][0]='1';
    freq[1]=freq[2]=1;

    for(j=3; j<=Z; j++)
    {
        len = freq[j-1];
        pen = freq[j-2];
        cary = 0;

        if(len>pen)
        {
            for(i=0; i<pen; i++)
            {
                x = (fib[j-1][i]+fib[j-2][i]+cary-96);
                fib[j][i] = x%10+48;
                cary = x/10;
            }
            for(; i<len; i++)
            {
                x = (fib[j-1][i]-48+cary);
                fib[j][i] = x%10+48;
                cary = x/10;
            }
            if(cary) fib[j][i++] = cary+48;
            freq[j] = i;
        }
        else
        {
            for(i=0; i<len; i++)
            {
                x = (fib[j-1][i]+fib[j-2][i]+cary-96);
                fib[j][i] = x%10+48;
                cary = x/10;
            }
            for(; i<pen; i++)
            {
                x = (fib[j-2][i]-48+cary);
                fib[j][i] = x%10+48;
                cary = x/10;
            }
            if(cary) fib[j][i++] = cary+48;
            freq[j] = i;
        }
    }

    while(scanf("%d",&N)!=EOF)
    {
        if(!N) printf("0\n");
        else
        {
            reverse(fib[N],fib[N]+freq[N]);
            printf("%s\n",fib[N]);
        }
    }

    return 0;

}
