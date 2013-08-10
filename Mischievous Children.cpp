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
#define SIZE 1000000000
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
long long Factorial(long long int N)
{
    long long res = 1, i;

    for(i=2; i<=N; i++)
        res *= i;
    return res;
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char str[25];
    int alpha[27], total;
    long long vag, res;
    cin>>N;
    sc(ch);

    for(i=1; i<=N; i++)
    {
        gets(str);
        memset(alpha, 0, sizeof alpha);
        printf("Data set %d: ",i);

        for(j=0; str[j]; j++)
            alpha[str[j]-64]++;

        res = Factorial(j);

        for(j=1; j<27; j++)
            if(alpha[j])
                res /= Factorial(alpha[j]);

        printf("%lld\n",res);
    }

    return 0;
}
