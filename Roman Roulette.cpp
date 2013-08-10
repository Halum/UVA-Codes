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
int Josep(int total, int period, int i)
{
    if(total+period==2) return 1;

    register int count=0, j;
    char circle[total+1], x=0, pos=0;
    for(j=1; j<=total; j++)
        circle[j] = j;
    --i;
    int killed=0;
    while(++i)
    {
        if(i>total) i %= total;
        if(circle[i])
        {
            count++;
            if(count==period && !x)
            {
                x = i;
                circle[i] = count = 0;
                killed++;
            }
            else if(count==period)
            {
                swap (circle[x], circle[i]);
                i = x;
                count = x = 0;
            }
            if(killed == total-1) break;
        }
    }
    for(i=1; circle[i]==0; i++);

    return circle[i];
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);


    while(cin>>N>>x && N+x)
    {
        for(i=1; ;i++)
        if(Josep(N, x, i)==1)
        {
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}
