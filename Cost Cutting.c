#include<stdio.h>
int main()
{
    int i,  j,  k,  t,  a[3], swp;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a[0], &a[1], &a[2]);
       for(j=0; j<3-1; j++)
        for(k=0; k<3-1-j; k++)
        {
            if(a[k]>a[k+1])
            {
                swp = a[k];
                a[k] = a[k+1];
                a[k+1] = swp;
            }
        }
        printf("Case %d: %d\n",i,a[1]);

    }

    return 0;
}
