#include<stdio.h>
#include<math.h>
int main()
{
    int T, i, j, n;
    double a[12], sum, avg;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        sum = 0.00;
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[j]);
            sum += a[j];
        }
        avg = sum/12;
        if(avg>999)
        {
            n = avg/1000;
            avg -= 1000;
            avg = floorf(avg*100+0.5)/100;

            printf("%d $%d,%.2lf\n",i,n,avg);
        }
        else{
            printf("%d $%.lf\n",i,avg);
            avg = floorf(avg*100+0.5)/100;
        }


    }





    return 0;
}
