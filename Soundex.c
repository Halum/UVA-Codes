#include<stdio.h>
#include<string.h>
int main()
{
    int i, sum, x;
    char str[25];
    for(; scanf("%s",str)!=EOF; )
    {
        x = 0;
        for(i=0; i<strlen(str); i++)
        {
            if((str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V') && x!=1)
            {
                printf("1");
                x=1;
            }
            else if((str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z') && x!=2)
            {
                printf("2");
                x=2;
            }
              else if((str[i]=='D' || str[i]=='T') && x!=3)
            {
                printf("3");
                x=3;
            }
            else if((str[i]=='L') && x!=4)
            {
                printf("4");
                x=4;
            }
            else if((str[i]=='M' || str[i]=='N') && x!=5)
            {
                printf("5");
                x=5;
            }
            else if((str[i]=='R') && x!=6)
            {
                printf("6");
                x=6;
            }
            else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='H' || str[i]=='W' || str[i]=='Y')
                x = 0;
        }
        printf("\n");
    }

    return 0;
}
