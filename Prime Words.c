#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i, j, k=2, a[200], sum;
    char str[25];
    a[0]=1, a[1]=2;
    for(i=3; i<1100; i++)
    {
        for(j=2; j<=i/2+1; j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2+1)
        {
            a[k] = i;
            k++;
        }
    }
    for(; scanf("%s",str)!=EOF; )
    {
        sum = 0;
        for(i=0; i<strlen(str); i++)
        {
            if(isupper(str[i]))
                sum += str[i]-38;
            if(islower(str[i]))
                sum += str[i]-96;
        }

        for(i=0; i<185; i++)
        {
            if(sum==a[i])
            {
                printf("It is a prime word.\n");
                break;
            }
        }
        if(i==185)
            printf("It is not a prime word.\n");

    }




    return 0;
}
