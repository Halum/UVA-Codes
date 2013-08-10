#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, k, n, d[1500];
    for(; scanf("%d",&n)!=EOF; )
    {
        if(n==0)
            break;
        j=0;
        for(i=0; i<n; i++)
            scanf("%d",&d[i]);
        sort(&d[0], &d[n]);

        for(i=1; i<n; i++)
        {
            if(fabs(d[i-1]-d[i])>200 && i!=n-1)
                j=-1;
            else if(i==n-1 && fabs(d[i]-1422)>100)
                j=-1;
        }

        if(j==-1)
            printf("IMPOSSIBLE\n");
        else
            printf("POSSIBLE\n");
    }


    return 0;
}

