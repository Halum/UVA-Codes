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
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y, pen, cary;
char ch, dummy;
bool check;
////
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int a1,a2,b1,b2,c1,c2,det;
    LD x,y;

    while(scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2) && (a1||b1||c1||a2||b2||c2))
    {
        det = a1*b2-a2*b1;

        if(det)
        {
            x = (LD)(c1*b2-c2*b1)/det;
            y = (LD)(a1*c2-a2*c1)/det;

            printf("The fixed point is at %.2Lf %.2Lf.\n",x,y);
        }
        else printf("No fixed point exists.\n");
    }

    return 0;
}
