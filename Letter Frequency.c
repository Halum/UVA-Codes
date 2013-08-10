#include<stdio.h>
#include<string.h>
int main()
{
    int t, j, a[28], b[28], c[28], max, k;
    register int i;
    char str[210];
    for(i=65, j=1; i<65+26; j++, i++)
        a[j] = i;
    for(i=97, j=1; i<97+26; j++, i++)
        b[j] = i;

    scanf("%d\n",&t);

    for(k=1; k<=t; k++)
    {
        gets(str);

        for(i=0; i<28; i++)
            c[i] = 0;

        for(i=0 ; i<strlen(str); i++)
        {
            for(j=1; j<27; j++)
                if(str[i]==a[j] || str[i]==b[j])
                {
                    c[j]++;
                    break;
                }
        }
        max = 0;
        for(i=1; i<27; i++)
            if(c[i]>max)
                max = c[i];

        for(i=1; i<27; i++)
            if(c[i]==max)
                printf("%c",b[i]);
        printf("\n");
    }


    return 0;
}
