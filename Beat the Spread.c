#include<stdio.h>
int main()
{
    int a, b, x, y, i, t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);

        x = (a+b)/2;
        y = a-x;

        if(x>=0 && y>=0 && (a+b)%2==0 && (a-b)%2==0 && a>=b)
        {
            if(x>=y)
                printf("%d %d\n",x,y);
            else
                printf("%d %d\n",y,x);
        }
        else
            printf("impossible\n");
        }

    return 0;
}
