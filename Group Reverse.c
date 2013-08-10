#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void rev(char *x, int n)
{
    char p;
    int len, j;
    len = n-1;
    for(j=0; j<n/2; j++)
    {
        p = x[j];
        x[j] = x[len];
        x[len] = p;
        len--;
    }
}

int main()
{
    int i, n;
    char str[105], ch;

    for(; scanf("%d%c",&n,&ch) && n ;)
    {
        scanf("%s",str);
        n = strlen(str)/n;
        for(i=0; i<strlen(str); i+=n)
            rev(&str[i], n);

        printf("%s\n",str);
    }

    return 0;
}
