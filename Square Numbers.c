#include<stdio.h>
#include<math.h>
int main()
{

    double a, b;
    int x, y;

    for(;;)
    {
        scanf("%lf%lf",&a,&b);
        if(a==0 && b==0)
            break;
        x = sqrt(b);
        y = sqrt(a-1);
        printf("%d\n",x-y);
    }


    return 0;
}

