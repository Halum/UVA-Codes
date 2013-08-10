#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define fi(a,b) for(a=1; a<=b; a++)
#define fc(a,b) for(a=0; a<b; a++)
#define si(a) scanf("%d",&a)
#define pi(a) printf("%d\n",a)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int m, n, x, y, t, i;

    while(scanf("%d",&t) && t)
    {
        scanf("%d%d",&m,&n);
        fi(i,t)
        {
            scanf("%d%d",&x,&y);

            if((x==m && y==n) || (x==m && y!=n) || (x!=m && y==n))
                printf("divisa\n");
            else if(x>m && y>n)
                printf("NE\n");
            else if(x>m && y<n)
                printf("SE\n");
            else if(x<m && y<n)
                printf("SO\n");
            else
                printf("NO\n");
        }

    }


    return 0;

}
