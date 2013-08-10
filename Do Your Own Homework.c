#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, D, sp[105], n;
    char spr[100][22], sub[22], dumy;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&n,&dumy);
        for(j=0; j<n; j++)
            scanf("%s%d%c",spr[j],&sp[j],&dumy);

        scanf("%d%c%s",&D,&dumy,sub);
        printf("Case %d: ",i);
        for(j=0; j<n; j++)
        {
            if(strcmp(sub,spr[j])==0)
            {
                if(sp[j]<=D)
                    printf("Yesss\n");
                else if(sp[j]<=D+5)
                    printf("Late\n");
                else
                    printf("Do your own homework!\n");

                break;
            }
        }
        if(j==n)
            printf("Do your own homework!\n");
    }

    return 0;
}
