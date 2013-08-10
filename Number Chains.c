#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void ascen(char x[]);
void descen(char x[]);
void makechar(int x, char y[]);
int main()
{
    int i, a, b, ans[1005], j;
    char x[12];

    for(;;)
    {
        scanf("%s",x);

        ans[0] = atoi(x);

        if(ans[0]==0)
            break;
        printf("Original number was %s\n",x);
        for(i=1; ;i++)
        {
            ascen(x);
            a = atoi(x);
            descen(x);
            b = atoi(x);
            printf("%d - %d = %d\n",b,a,b-a);

            for(j=0; j<i; j++)
                if(b-a==ans[j])
                {
                    ans[0]=10000;
                    printf("Chain length %d\n\n",i);
                    break;
                }

            if(ans[0]==10000)
                break;

            ans[i] = b-a;

            if(ans[i]==0)
            {
                x[0] = '0';
                x[1] = '\0';
            }
            else
                makechar(ans[i], x);
        }
    }

    return 0;
}

void ascen(char x[])
{
    int i, len, j;
    char y;

    len = strlen(x);
    for(i=0; i<len-1; i++)
        for(j=0; j<len-1-i; j++)
            if(x[j]>x[j+1])
            {
                y=x[j];
                x[j]=x[j+1];
                x[j+1]=y;
            }
}
void descen(char x[])
{
    int i, len, j;
    char y;

    len = strlen(x);
    for(i=0; i<len-1; i++)
        for(j=0; j<len-1-i; j++)
            if(x[j]<x[j+1])
            {
                y=x[j];
                x[j]=x[j+1];
                x[j+1]=y;
            }
}

void makechar(int x, char y[])
{
    int len, i;

    len = log10(x)+1;
    for(i=0; i<len; i++)
    {
        y[i] = x%10+48;
        x/=10;
    }
    y[i]='\0';
}
