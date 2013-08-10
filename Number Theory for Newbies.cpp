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
#define Z 500000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
//int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char a[20],b[20],c[20];
    LL x,y,sum;

    while(gets(c)!=NULL)
    {
        for(i=0; c[i]=='0'; i++);

        strcpy(c,&c[i]);

        int len = strlen(c);

        sort(c,c+len);

        strcpy(b,c);

        for(i=0; i<len; i++)
        {
            if(b[i]!='0')
            {
                swap(b[i],b[0]);
                break;
            }
        }

        reverse(c,c+len);

        x=atoll(c), y=atoll(b);

        sum=(x-y);
        printf("%lld - %lld = %lld = 9 * %lld\n",x,y,sum,sum/9);
    }



    return 0;
}
