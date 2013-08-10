#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int k, e, f, c, n, sum;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        scanf("%d%d%d",&e,&f,&c);

        e+=f, sum=0;

        for(;;)
        {
            if(e<c)
                break;
            sum += e/c;
            e = e/c + e%c;
        }
        printf("%d\n",sum);
    }

    return 0;
}
