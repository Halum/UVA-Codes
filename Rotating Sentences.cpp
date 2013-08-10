#include<stdio.h>
#include<string.h>
int main()
{

    int i, j, k, max=0;
    char str[105][105];

    for(i=0; scanf("%[^\n]\n",str[i])!=EOF; i++)
    {
        if(strlen(str[i])>max)
            max=strlen(str[i]);
    }

    for(j=0; j<max; j++)
    {
        for(k=0; k<=i-1; k++)
        {
            if(j<strlen(str[i-1-k]))
                printf("%c",str[i-1-k][j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
