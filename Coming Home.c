#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int a[105], i, j, n, K, t, H, M, D, strt, h, m;
    scanf("%d",&t);
    for(K=1; K<=t; K++)
    {
        scanf("%d%d:%d",&n,&h,&m);
        strt = h*60+m;

        for(i=0; i<n; i++)
        {
            scanf("%d:%d%d",&H,&M,&D);
            if(H<h)
            {
                H=h-H;
                H=24-H;
                a[i] = h*60+H*60+M+D;
            }
            else if(H==h && M<m)
            {
                M=m-M;
                M=60-M;
                a[i] = h*60+m+23*60+M+D;
            }
            else if(h==H && m==M)
                a[i] = h*60+m+D;
            else
                a[i] = H*60+M+D;

        }

        for(i=0; i<n-1; i++)
            for(j=0; j<n-1-i; j++)
                if(a[j]>a[j+1])
                {
                    a[j] = a[j]^a[j+1];
                    a[j+1] = a[j]^a[j+1];
                    a[j] = a[j]^a[j+1];
                }
        printf("Case %d: %d\n",K,a[0]-strt);
    }

    return 0;

}
