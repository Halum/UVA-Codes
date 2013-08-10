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
#define Z 2600
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, x, y, pen, cary;
char ch, dummy;
char fact[1001][Z];
int freq[1001], sum[1001];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    fact[1][0]=fact[0][0]='1', fact[1][1]=fact[0][1]='\0', freq[1]=freq[0]=sum[0]=sum[1]=1;
    for(k=2; k<=1000; k++)
    {
        len = freq[k-1];
        for(i=0; i<len; i++)
        {
            x = ((fact[k-1][i]-48)*k+cary);
            fact[k][i] = x%10+48;
            sum[k] += x%10;
            cary = x/10;
        }
        if(cary)
        {
            len = log10(cary)+1;
            for(j=1; j<=len; j++)
            {
                fact[k][i++] = cary%10+48;
                sum[k] += cary%10;
                cary /= 10;
            }
        }
        cary = 0;
        freq[k] = i;
    }

    while(scanf("%d",&N)!=EOF)
    {
        cout<<sum[N]<<endl;
    }

    return 0;
}
