#include<stdio.h>
int main()
{
    double c, f, i, t, x;
    scanf("%lf",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf",&c,&f);
        x = 100*f/180;
        printf("Case %.0lf: %.2lf\n",i,c+x);
    }

    return 0;
}

