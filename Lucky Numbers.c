#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    long long int N, x, t, i, j;

    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld",&N);
        printf("Case %lld:",i);

        for(j=sqrt(N); j>=1; j--)
        {
            x = N-j*j;

            if(x%j==0 && x!=0)
                printf(" %lld",x);

        }
        printf("\n");
    }


    return 0;
}

