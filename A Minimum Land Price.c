#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void buble(long long int *x, long long int n)
{
    long long int i, j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i; j++)
            if(x[j]<x[j+1])
            {
                x[j] = x[j]^x[j+1];
                x[j+1] = x[j]^x[j+1];
                x[j] = x[j]^x[j+1];
            }
}

int main()
{
    long long int x[45], i, sum, t, j, k, l;
    scanf("%lld",&t);
    for(l=1; l<=t; l++)
    {
        for(i=0; scanf("%lld",&x[i]) && x[i]; i++);
        sum = 0;
        buble(x, i);

        for(j=0, k=1; j<i; j++, k++)
        {
            sum += 2*pow(x[j],k);
            if(sum>5000000)
            {
                printf("Too expensive\n");
                break;
            }
        }
        if(j==i)
            printf("%lld\n",sum);
    }


    return 0;
}

