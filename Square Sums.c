#include<stdio.h>
int main()
{
    int i, j, k, n, a[12][12], x, sum, l;

    for(l=1; ; l++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);

        printf("Case %d:",l);

        if(n%2!=0)
            x = (n+1)/2;
        else
            x = n/2;

        for(k=0; k<x; k++)
        {
            sum=0;
            for(i=k; i<n-k; i++)
                sum += a[k][i];

            for(i=k; i<n-k; i++)
                sum += a[n-1-k][i];

            for(i=k+1; i<n-1-k; i++)
                sum += a[i][k];

            for(i=k+1; i<n-1-k; i++)
                sum += a[i][n-1-k];
            if(k==x-1 && n%2!=0)
                sum /= 2;
            printf(" %d",sum);
        }
        printf("\n");


    }

    return 0;
}
