#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int i, j, k, t, len;
    char str[205], b[10], ch;

    scanf("%d\n",&t);
    for(i=1; i<=t; i++)
    {
        gets(str);

        printf("Case %d: ",i);

        for(j=0; j<strlen(str); )
        {
            ch = str[j++];

            for(k=0; isdigit(str[j]); k++)
                    b[k] = str[j++];

            b[k] = '\0';
            len = atoi(b);
            for(k=1; k<=len; k++)
                printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}
