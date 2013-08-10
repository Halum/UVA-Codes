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
    int i, t, n, k, p, res;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&n,&k,&p);

        res = (k+p)%n;
        if(res==0)
            res = n;

        printf("Case %d: %d\n",i,res);
    }

    return 0;

}

