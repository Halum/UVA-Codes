#include<stdio.h>
#include<math.h>
int main()
{
    int N ,i, j, c, len, n, x;

    for(; scanf("%d",&N)!=EOF; )
    {
        x=N;
        printf("%d ",N);
        if(N==1)
            printf("is not prime.\n");
        else
        {
            for(j=2; j<=sqrt(N); j++)
                if(N%j==0)
                {
                    printf("is not prime.\n");
                    break;
                }
            if(j>sqrt(N))
            {
                n=0;
                len = log10(N)+1;

                for(j=1, i=pow(10,len-1); j<=len; j++, i/=10)
                {
                    n += N%10*i;
                    N/=10;
                }

                for(j=2; j<=sqrt(n); j++)
                    if(n%j==0)
                    {
                        printf("is prime.\n");
                        break;
                    }
                if(j>sqrt(n) && x!=n)
                    printf("is emirp.\n");
                else if(j>sqrt(n) && x==n)
                    printf("is prime.\n");
            }
        }

    }





    return 0;
}

