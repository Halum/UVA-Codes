#include<stdio.h>
int main()
{
    int a[55], i, j, h, l, t, n;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        h=0, l=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(j>0 && a[j]>a[j-1])
                h++;
            if(j>0 && a[j]<a[j-1])
                l++;
        }
        printf("Case %d: %d %d\n",i,h,l);
    }

    return 0;
}
