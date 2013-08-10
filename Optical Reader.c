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
    int a, b, c, d, e, i, n, ans;
    while(scanf("%d",&n) && n)
    {
        for(i=1; i<=n; i++)
        {
            ans=0;
            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
            if(a<=127)
                ans++;
            if(b<=127)
                ans++;
            if(c<=127)
                ans++;
            if(d<=127)
                ans++;
            if(e<=127)
                ans++;


            if(!ans || ans>1)
                printf("*\n");
            else if(a<=127)
                printf("A\n");
            else if(b<=127)
                printf("B\n");
            else if(c<=127)
                printf("C\n");
            else if(d<=127)
                printf("D\n");
            else if(e<=127)
                printf("E\n");
        }
    }

    return 0;

}
