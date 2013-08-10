#include<stdio.h>
int main()
{
    int i, j, sum ,p[12], c[12];
    for(j=1; ;j++)
    {
        scanf("%d",&sum);
        if(sum<0)
            break;
        for(i=0; i<12; i++)
            scanf("%d",&p[i]);
        for(i=0; i<12; i++)
            scanf("%d",&c[i]);
        printf("Case %d:\n",j);
        for(i=0; i<12; i++)
        {
            if(sum>=c[i])
            {
                printf("No problem! :D\n");
                sum-=c[i];
            }
            else
            {
                printf("No problem. :(\n");
            }
            sum+=p[i];
        }
    }

    return 0;
}

