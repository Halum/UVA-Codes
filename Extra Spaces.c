#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("b.txt","w",stdout);
    //freopen("a.txt","r",stdin);
    int t, i, n, j, sp;
    char ch;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&n,&ch);
        printf("Case %d:\n",i);
        j=0, sp=0;
        for(;;)
        {
            scanf("%c",&ch);

            if(ch==' ' && sp==0)
            {
                printf(" ");
                sp++;
            }
            else if(ch==' ' && sp>0)
                continue;
            else if(ch=='\n')
            {
                printf("\n");
                j++;
                sp=0;
            }
            else
            {
                printf("%c",ch);
                sp=0;
            }

            if(j==n)
            {
                if(i<t)
                printf("\n");
                break;
            }

        }
    }

    return 0;
}

