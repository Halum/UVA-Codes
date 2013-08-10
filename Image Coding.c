#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int i, j, k, t, n, m, a[3][27], r, c,sum, max;
    char ch;
    scanf("%d",&t);
    for(i=1, j='A'; i<=26; i++, j++)
            a[1][i] = j;

    for(k=1; k<=t; k++)
    {
        scanf("%d%d%d%d%c",&r,&c,&m,&n,&ch);
        for(i=1; i<=26; i++)
            a[2][i] = 0;

        for(i=1; i<=r*c+r; i++)
        {
            scanf("%c",&ch);
            if(i%(c+1)==0)
                continue;
            for(j=1; j<=26; j++)
                if(ch==a[1][j])
                {   a[2][j]++;
                    break;
                }
        }
        max=0, sum=0;
        for(i=1; i<=26; i++)
            if(max<a[2][i])
                max=a[2][i];

        for(i=1; i<=26; i++)
        {
            if(a[2][i]==max)
                sum+=a[2][i]*m;
            else
                sum+=a[2][i]*n;
        }
        printf("Case %d: %d\n",k,sum);
    }

    return 0;

}

