#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    register int j,i;
    int k, n, b, h, w, p, bed[15], min, total, chk;
    for(; scanf("%d%d%d%d",&n,&b,&h,&w)!=EOF; )
    {
        min = 2147483647, total=0;
        for(i=0; i<h; i++)
        {
            scanf("%d",&p);
            chk=0;
            for(j=0; j<w; j++)
            {
                scanf("%d",&bed[j]);
                if(bed[j]!=0 && bed[j]>=n)
                    chk=1;
            }

            if(chk==1 && p*n<=min && p*n<=b)
            {
                min = p*n;
                total = 1;
            }
        }
        if(total==1)
            printf("%d\n",min);
        else printf("stay home\n");
    }

    return 0;

}
