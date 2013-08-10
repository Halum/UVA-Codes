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
#define eps 1e-7
#define SIZE 12
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    double x1[SIZE], y1[SIZE], x2[SIZE], y2[SIZE], a, b;

    while(scanf("%c%c",&ch,&dum)&& ch=='r')
    {
        scanf("%lf%lf%lf%lf%c",&x1[l],&y1[l],&x2[l],&y2[l],&dum);
        l++;
    }


    while(1)
    {
        scanf("%lf %lf",&a,&b);
        j++;

        if(fabs(a-9999.9)<eps && fabs(b-9999.9)<eps) break;

        for(i=1,k=0; i<l; i++)
            if(a>x1[i] && a<x2[i] && b<y1[i] && b>y2[i])
                printf("Point %d is contained in figure %d\n",j,i), k=1;

        if(!k) printf("Point %d is not contained in any figure\n",j);
    }


    return 0;
}
