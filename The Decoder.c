#include<stdio.h>
int main()
{
    char ch;
    for(; scanf("%c",&ch)!=EOF; )
    {
        if(ch=='\n')
            printf("\n");
        else
            printf("%c",ch-7);
    }
    return 0;
}

