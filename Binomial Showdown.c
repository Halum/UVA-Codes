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
    int m, n, i, j, k, l;
    double up, dwn;
    while(scanf("%d%d",&m,&n) && (m||n))
    {
        if(m==n)
            printf("1\n");
        else
        {
            up=dwn=l=0;
            k=n;
            if(m-n>n)
                k=m-n;
            for(j=k+1; j<=m; j++)
            {
                up += log(j);
                dwn += log(++l);
            }

            k = exp(up-dwn)+0.5;
            printf("%d\n",k);
        }
    }

    return 0;

}
