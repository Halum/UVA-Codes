#include<stdio.h>
int main()
{
    int i, t;
    char ch;
    scanf("%d%c",&t,&ch);
    for(i=1; scanf("%c",&ch)!=EOF; )
    {
        if(ch=='0')
            printf("O");
        else if(ch=='1')
            printf("I");
        else if(ch=='2')
            printf("Z");
        else if(ch=='3')
            printf("E");
        else if(ch=='4')
            printf("A");
        else if(ch=='5')
            printf("S");
        else if(ch=='6')
            printf("G");
        else if(ch=='7')
            printf("T");
        else if(ch=='8')
            printf("B");
        else if(ch=='9')
            printf("P");
        else
            printf("%c",ch);
    }
    return 0;
}

