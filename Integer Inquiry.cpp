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
#define Z 10010
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
char num[Z], pum[Z];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    gets(pum);
    pen = strlen(pum);
    reverse(pum,pum+pen);
    while(gets(num))
    {
        if(num[0]=='0' && num[1]=='\0') break;
        len = strlen(num);
        reverse(num,num+len);

        if(len>pen)
        {
            cary = 0;
            for(i=0; i<pen; i++)
            {
                x = (num[i]+pum[i]+cary-96);
                pum[i] = x%10+48;
                cary = x/10;
            }
            for(; i<len; i++)
            {
                x = (num[i]-48+cary);
                pum[i] = x%10+48;
                cary = x/10;
            }
            if(cary) pum[i++] = cary+48;
            pum[i] = '\0';
            pen = i, cary=0;
        }
        else
        {
            cary = 0;
            for(i=0; i<len; i++)
            {
                x = num[i]+pum[i]-96+cary;
                pum[i] = x%10+48;
                cary = x/10;

            }
            for(; i<pen; i++)
            {
                x = (pum[i]-48+cary);
                pum[i] = x%10+48;
                cary = x/10;
            }
            if(cary) pum[i++] = cary+48;
            pum[i] = '\0';
            pen = i, cary=0;
        }
    }
    for(j=pen-1; j>=0; j--)
        cout<<pum;
    cout<<endl;

    return 0;
}
