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
#define SIZE 65001
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

//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    double a, b, c, s, mul;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s = ( a+b+c)/2;
        s = s*(s-a)*(s-b)*(s-c);
        if(s<=1e-9){
            printf("-1.000\n");
            continue;
        }
        s = sqrt(s);
        s = 4.0*s;
        s = s/3.0;

        printf("%.3lf\n",s);
    }


    return 0;
}
