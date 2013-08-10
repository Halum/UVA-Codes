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
#define Z 1001
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
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char num[Z];
    while(gets(num))
    {
        if(!strcmp(num,"0")) break;
        cary = 0;
        len = strlen(num);
        for(i=0; i<len;)
        {
            cary *= 10;
            x = num[i++]-48 + cary;
            if(x<17 && i<len) x = x*10 + num[i++]-48;
            if(x<17 && i<len) x = x*10 + num[i++]-48;
            cary = x%17;
        }
        if(!cary) cout<<"1\n";
        else cout<<"0\n";
    }

    return 0;
}


