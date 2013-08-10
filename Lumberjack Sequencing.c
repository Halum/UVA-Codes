#include<stdio.h>
int main()
{
    int T, a[11], i, j, x, y;
    scanf("%d",&T);
    printf("Lumberjacks:\n");
    for(i=1; i<=T; i++)
    {
        x=0, y=0;

        for(j=0; j<10; j++)
        {
            scanf("%d",&a[j]);
            if(j>0)
            {
                if(a[j]>=a[j-1])
                    x++;
                else if(a[j]<=a[j-1])
                    y++;
            }
        }
        if(x==9 || y==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }


    return 0;
}
