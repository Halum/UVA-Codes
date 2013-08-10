#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int t, i, k, len;
    char a[25], b[25];

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%s%s",a,b);

        if(strlen(a)==strlen(b))
        {
            len = strlen(a);
            for(i=0; i<len; i++)
            {
                if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'))
                    continue;
                else if(a[i]!=b[i])
                {
                    printf("No\n");
                    break;
                }
            }
            if(i==len)
                printf("Yes\n");
        }
        else printf("No\n");
    }

    return 0;

}

