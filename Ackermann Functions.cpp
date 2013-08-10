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
#define SIZE 1000
//-----------------------------------
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
LL T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy, num1[SIZE], num2[SIZE], result[SIZE];
bool check;


// ----------------------------------
int main()
{
    register LL i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL max, val, count;

    while(cin>>x>>y && x+y)
    {

        if(x==1 || y== 1)
            max = 3, val = 1;
        else max=0;

        if(x>y) swap(x,y);

        for(i=x; i<=y; i++)
        {
            count = 0, N=i;
            while(N^1)
            {
                if(N%2) N = 3*N+1;
                else N /= 2;
                count++;
            }
            if(count>max)
                val = i, max = count;
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",x,y,val,max);
    }

    return 0;
}
