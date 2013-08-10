#include<stdio.h>
int main()
{
    long long int t, i, a, b, c;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);

        printf("Case %lld: ",i);

        if(a<=0 || b<=0 || c<=0)
            printf("Invalid\n");

        else if(a<b+c && b<a+c && c<a+b)
        {
            if(a==b && b==c)
                printf("Equilateral\n");
            else if(a==b || b==c || a==c)
                printf("Isosceles\n");
            else if(a!=b && b!=c && c!=a)
                printf("Scalene\n");
        }
        else
            printf("Invalid\n");
    }

    return 0;
}
