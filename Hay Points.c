#include<stdio.h>
#include<string.h>
int main()
{
    int m, n, i, a[1000], dot=0, sum=0;
    char str[1000][18], ptr[50], ch;

    scanf("%d%d%c",&m,&n,&ch);

    for(i=0; i<m; i++)
        scanf("%s%d%c",str[i],&a[i],&ch);

    for(; scanf("%s",ptr); )
    {
        if(ptr[0]=='.')
        {
            printf("%d\n",sum);
            sum=0;
            dot++;
        }

        if(dot==n)
            break;
        for(i=0; i<m; i++)
        {
            if(strcmp(ptr,str[i])==0)
            {
                sum+=a[i];
                break;
            }
        }
    }

    return 0;
}
