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
#define SIZE 2000000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy, road[SIZE+2];
bool check;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    while(scanf("%d",&len) && len)
    {
        sn;
        gets(road);
        int dis,count;
        dis=SIZE+2, count=ch=0;
        for(i=0; i<len; i++)
        {
            if(road[i]=='R' || road[i]=='D')
            {
                if(road[i]!=ch && ch)
                    if(++count<dis) dis=count;
                ch = road[i], count=0;
            }
            else if(road[i]=='Z')
            {
                dis=0;
                break;
            }
            else count++;
        }
        printf("%d\n",dis);
    }

    return 0;
}
