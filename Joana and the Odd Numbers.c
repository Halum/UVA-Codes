#include<stdio.h>
int main()
{
    unsigned long long int N, a, b;

    for(; scanf("%llu",&N)!=EOF; )
    {
        a = (N+1)/2;

        b = a*(2+(a-1)*2)/2;

        a = 1+(b-1)*2;

        printf("%llu\n",3*a-6);
    }

    return 0;
}
