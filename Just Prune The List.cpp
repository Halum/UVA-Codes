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
map <int, int> num;
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout

    cin>>T;
    while(T--)
    {
        num.clear();

        scanf("%d%d",&x,&y);

        for(i=1; i<=x; i++)
        {
            scanf("%d",&N);
            num[N]++;
        }
        for(i=1; i<=y; i++)
        {
            scanf("%d",&N);
            num[N]--;
        }
        sum = 0;

        map<int, int>::iterator yo;

        for(yo=num.begin(); yo!=num.end(); yo++)
        {
            sum += abs((*yo).second);
        }

        printf("%d\n",sum);

    }


    return 0;
}

