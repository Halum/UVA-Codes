#include<stdio.h>
int main()
{
    int i, j, a[4], t, k, swp;

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        for(i=0; i<4; i++)
            scanf("%d",&a[i]);

        for(i=0; i<3; i++)
            for(j=0; j<3-i; j++)
                if(a[j]>a[j+1])
                {
                    swp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = swp;
                }
        if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
            printf("square\n");
        else if(a[0]==a[1] && a[2]==a[3])
            printf("rectangle\n");
        else if(a[0]<a[1]+a[2]+a[3] && a[1]<a[2]+a[3]+a[0] && a[2]<a[3]+a[0]+a[1] && a[3]<a[0]+a[1]+a[2])
            printf("quadrangle\n");
        else
            printf("banana\n");

    }

    return 0;
}
