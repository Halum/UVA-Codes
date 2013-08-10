//10013
#include<stdio.h>
#include<string.h>
#define z 1000005
char a[z], b[z], ch, c[z];
int main()
{
    int t, n, i, j, k, hav;
    scanf("%d",&t);

    for(k=1; k<=t; k++)
    {
        scanf("%d\n",&n);
        for(i=0; i<n; i++)
        {
            a[i] = fgetc(stdin);
            ch = fgetc(stdin);
            b[i] = fgetc(stdin);
            ch = fgetc(stdin);
        }

        hav = 0;

        for(j=n-1; j>=0; j--)
        {
            if(a[j]-96+b[j]+hav>9)
            {
                c[j] = a[j]+b[j]+hav-58;
                hav = 1;
            }
            else
            {
                c[j] = a[j]+b[j]+hav-48;
                hav = 0;
            }
        }
        c[n] = '\0';

        printf("%s\n",c);
        if(k<t) printf("\n");
    }
    return 0;
}
