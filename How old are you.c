#include<stdio.h>
int main()
{
    int t, i, s, d, m, y, D, M, Y;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d/%d/%d",&d,&m,&y);
        scanf("%d/%d/%d",&D,&M,&Y);

        printf("Case #%d: ",i);

        if(Y>y)
            printf("Invalid birth date\n");
        else if(Y==y && M>m)
            printf("Invalid birth date\n");
        else if(Y==y && M==m && D>d)
            printf("Invalid birth date\n");
        else
        {
            s = y-Y;
            if(m-M<0)
                s--;
            else if(m==M && d-D<0)
                s--;

            if(s>130)
                printf("Check birth date\n");
            else
                printf("%d\n",s);
        }
    }

    return 0;
}
