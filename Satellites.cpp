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
    int i, j, k;
    double r=6440, s, theta, rad, py, res, cad;
    char x[5];
    py  = 2*acos(0.0)/180;
    while(scanf("%lf %lf %s",&r,&theta,x)!=EOF)
    {
        if(x[0]=='m')
            theta /= 60;
        cad = fabs(360-theta);
        rad = py*theta;
        cad = py*cad;
        r += 6440;
        if(theta>180)
            printf("%.6lf ",r*cad);
        else printf("%.6lf ",r*rad);

        rad = sin(rad/2);

        res = r * rad * 2;

        printf("%.6lf\n",res);
    }

    return 0;

}

