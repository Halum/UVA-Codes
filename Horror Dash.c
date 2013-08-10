#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int t, i, j, k, n, max;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        max = -100;
        scanf("%d",&n);
        for(i=0; i<n; i++){
            scanf("%d",&j);
            if(j>max) max=j;
        }
        printf("Case %d: %d\n",k,max);
    }

    return 0;

}

