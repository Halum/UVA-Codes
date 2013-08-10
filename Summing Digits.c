#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, len, sum;
    for(; ;)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        for(;;)
        {
            sum = 0;
            len = log10(n)+1;
            if(len==1)
            {
                printf("%d\n",n);
                break;
            }
            for(i=1; i<=len; i++)
            {
                sum+= n%10;
                n/=10;
            }
            n = sum;
        }

    }

    return 0;
}
