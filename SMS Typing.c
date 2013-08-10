#include<stdio.h>
int main()
{
    int t, i, sum;
    char ch;
    scanf("%d%c",&t,&ch);
    for(i=1; i<=t; i++)
    {
        sum = 0;
        for(;;)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            if(ch=='a'||ch=='d'||ch=='g'||ch=='j'||ch=='m'||ch=='p'||ch=='t'||ch=='w'||ch==' ')
                sum+=1;
            else if(ch=='b'||ch=='e'||ch=='h'||ch=='n'||ch=='q'||ch=='u'||ch=='x'||ch=='k')
                sum+=2;
            else if(ch=='c'||ch=='f'||ch=='i'||ch=='l'||ch=='o'||ch=='r'||ch=='v'||ch=='y')
                sum+=3;
            else
                sum+=4;
        }
        printf("Case #%d: %d\n",i,sum);
    }

    return 0;
}

