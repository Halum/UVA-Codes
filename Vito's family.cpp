#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t, i, j, r[500], R, sum, n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&R);
        sum = 0, n=(R-1)/2;
        for(j=0; j<R; j++)
            scanf("%d",&r[j]);
        sort(&r[0], &r[R]);
        for(j=0; j<R; j++)
            sum = sum + fabs(r[n]-r[j]);

        printf("%d\n",sum);
    }

    return 0;
}
