#include<stdio.h>
int main()
{
    int a,b,c,D,L, i, j, sum, count;

    for(;;)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&D,&L);
        if(a==0 && b==0 && c==0 && D==0 && L==0)
            break;
        count = 0;
        for(i=0; i<=L; i++)
        {
            sum = a*i*i + b*i + c;
            if(sum%D==0)
                count++;
        }
        printf("%d\n",count);

    }

    return 0;
}
