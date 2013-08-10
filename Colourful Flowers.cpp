#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d\n",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s\n",string)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;

using namespace std;
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int i, j, k, t;
    double a, b, c, s, py, r, R, ta;
    py = 2*acos(0.0);
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        s = (a+b+c)/2;

        ta = sqrt(s*(s-a)*(s-b)*(s-c));

        r = ta/s;

        R = (a*b*c)/(4*ta);

        printf("%.4lf %.4lf %.4lf\n",py*R*R-ta,ta-py*r*r,py*r*r);
    }

    return 0;

}
