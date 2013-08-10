#include<cstdio>
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
#define SIZE 10002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy;
bool check;
//---------------------------------------------------->
int Josep(int total, int period)
{
    register int i=1, count=0, k;
    char circle[total+1];
    memset(circle, 1, sizeof circle);
    circle[1]=0;
    int killed=1;
    while(++i)
    {
        if(i>total) i %= total;
        if(circle[i])
        {
            count++;
            if(count==period)
            {
                circle[i] = count = 0;
                killed++;
            }
            if(killed == total-1) break;
        }
    }
    for(i=1; circle[i]==0; i++);

    return i;
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int pwr[152];

    for(j=3; j<150; j++)
        for(i=1; ;i++)
            if(Josep(j, i)==2)
            {
                pwr[j] = i;
                break;
            }

    while(scanf("%d",&N) && N)
        printf("%d\n",pwr[N]);


    return 0;
}
