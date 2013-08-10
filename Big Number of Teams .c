#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("b.txt","w",stdout);
    //freopen("a.txt","r",stdin);
    int t, i, j, k, len;
    char tm[25], jug[25];
    scanf("%d\n",&t);

    for(k=1; k<=t; k++)
    {
        gets(tm);
        gets(jug);
        len = strlen(tm);
        printf("Case %d: ",k);
        if(!strcmp(tm,jug))
            printf("Yes\n");
        else
        {
            for(i=0, j=0; i<len; i++)
                if(tm[i]!=' ')
                {
                    tm[j] = tm[i];
                    j++;
                }
            tm[j]='\0';
            if(!strcmp(tm,jug))
                printf("Output Format Error\n");
            else
                printf("Wrong Answer\n");
        }
    }

    return 0;
}


