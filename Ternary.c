#include<stdio.h>
void ternary(long  long int N)
{
    if(N==1 || N<3)
    {
        printf("%d",N);
        return;
    }
    ternary(N/3);
    printf("%lld",N%3);
    return;
}

int main()
{
    int i, j, k, a[1000];
    long long int N;

    while( 1 )
    {
        scanf("%lld",&N);
        if(N<0)
            break;
        if(N==0)
            printf("0");
        else
            ternary(N);
        printf("\n");
    }

    return 0;
}
