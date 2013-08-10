#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int i, j, k, N;
    char x[120], ch;
    for(i=1; scanf("%d\n",&N); i++)
    {
        if(N==0) break;
        printf("Case %d:\n",i);

        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");

        for(k=1; k<=N; k++)
        {
            gets(x);
            printf("printf(\"");
            for(j=0; j<strlen(x); j++)
            {
                if(x[j]=='\\' || x[j]=='\'' || x[j]=='\"')
                    printf("\\\%c",x[j]);
                else
                    printf("%c",x[j]);
            }
            printf("\\n\");\n");
        }

        printf("printf(\"\\n\");\n");
        printf("return 0;\n}\n");
    }

    return 0;
}

