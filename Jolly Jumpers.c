#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int a[3005], i, k, n;
    int x[3005], ok;
    while(scanf("%d",&n)==1)
    {
        ok=1;
        for(i=1; i<=n; )
        {
            scanf("%d",&a[i]);
            x[i++]=0;
        }
        if(n==1){
            printf("Jolly\n");
        continue;}
        for(i=1; i<n; i++)
        {
            k = fabs(a[i]-a[i+1]);
            if(!k || k>=n || x[k])
            {
                ok=0;
                break;
            }
            x[k]=1;
        }
        if(ok)printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;

}
