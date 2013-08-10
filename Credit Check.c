#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef long long int lli;
int main()
{
    //freopen("b.txt","w",stdout);
    //freopen("a.txt","r",stdin);
    int t, i, j, k, sum, a[10];
    char x[20];

    scanf("%d\n",&t);
    for(k=1; k<=t; k++)
    {
        for(i=0; i<16; i+=4)
            scanf("%s",&x[i]);
        sum = 0;
        for(i=0, j=0; i<16; i+=2, j++)
            a[j] = (x[i]-48)*2;

        for(i=0, j=1; i<8; i++, j+=2)
        {
            sum += a[i]%10;
            sum += a[i]/10%10;
            sum += x[j]-48;
        }

        !(sum%10) ? printf("Valid\n"):printf("Invalid\n");


    }

    return 0;
}


