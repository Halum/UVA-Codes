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
int T,  len, N, sum, x, y, pen, cary;
char ch, dummy;
bool check;
////
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    for(j=1; ; j++)
    {
        cin>>x>>y;
        if(!x && !y) return 0;
        printf("Case %d: ",j);
        if(x==y) cout<<0<<endl;
        else
        {
            for(i=1,sum=0; i<=27; i++)
            {
                sum += y;
                if(sum>=x)
                {
                    printf("%d\n",i-1);
                    break;
                }
            }
            if(i>27) printf("impossible\n");
        }
    }

    return 0;
}
