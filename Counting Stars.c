#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int r, c, i, j, str;
    char sky[105][105];

    for(; scanf("%d%d",&r,&c)!=EOF; )
    {
        if(r==0 && c==0)
            break;

        for(i=1; i<=r; i++)
        {
            scanf("\n");
            for(j=1; j<=c; j++)
                scanf("%c",&sky[i][j]);
        }

        for(j=0; j<=c+1; j++)
        {
            sky[0][j] = '.';
            sky[r+1][j] = '.';
        }

        for(j=0; j<=r; j++)
        {
            sky[j][0] = '.';
            sky[j][c+1] = '.';
        }
        /*for(i=0; i<=r+1; i++)
        {
            for(j=0; j<=c+1; j++)
                printf("%c ",sky[i][j]);
            printf("\n");
        }*/


        str = 0;
        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
                if(sky[i][j]=='*')
                {
                    if(sky[i][j+1]!='*' && sky[i][j-1]!='*' && sky[i+1][j]!='*' && sky[i-1][j]!='*' && sky[i-1][j-1]!='*' && sky[i-1][j+1]!='*' && sky[i+1][j+1]!='*' && sky[i+1][j-1]!='*')
                        str++;
                }

        printf("%d\n",str);
    }


    return 0;
}

