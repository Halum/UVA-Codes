#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("b.txt","w",stdout);
    //freopen("a.txt","r",stdin);
    int t, i, j, k, len, pen;
    char x[100050];
    scanf("%d\n",&t);
    for(i=1; i<=t; i++)
    {
        gets(x);
        len = strlen(x);
        pen = sqrt(len);
        if(pen*pen==len)
        {
            for(j=0; j<pen; j++)
                for(k=j; k<len; k+=pen)
                    printf("%c",x[k]);
            printf("\n");
        }
        else
            printf("INVALID\n");
    }


    return 0;
}

