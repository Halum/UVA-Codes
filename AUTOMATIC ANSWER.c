#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int t, i, j, n;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        n = ((((((n*567)/9)+7492)*235)/47)-498);

        n = n/10%10;

        if(n<0)
            n *= -1;

        printf("%d\n",n);
    }





    return 0;
}

