#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef long long int lli;
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int i, j, d, len;
    char num[150], res[150];

    for( ;; )
    {
        scanf("%d %s\n",&d,num);
        if(d==0 && num[0]=='0' && num[1]=='\0')
            break;
        len = strlen(num);

        for(i=0, j=0; i<len; i++)
            if(num[i]-48!=d)
                res[j++] = num[i];

        res[j]='\0';
        if(res[0]=='\0')
            printf("0\n");
        else
        {
            len = strlen(res);
            for(i=0; i<len; i++)
                if(res[1]!='0')
                    break;
            if(i==len)
                printf("0\n");
            else printf("%s\n",res);
        }
    }
    return 0;

}
