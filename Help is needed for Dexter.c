#include<stdio.h>
int main()
{
    long long int L, N, i;
    for(; scanf("%lld",&N)!=EOF; )
    {
        for(i=1; N!=0; i++)
        {
            if(N%2!=0)
                L = (N+1)/2;
            else
                L = N/2;
            N-=L;
        }
        printf("%d\n",i-1);
    }

    return 0;
}
