#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef long long int lli;
int main()
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    register int i;
    int x[100000][2], j, n;
    for(i=0; i<10; i++)
        x[i][1]=0;
    scanf("%d",&x[0][0]);
    x[0][1]++;

    for(i=1; scanf("%d",&n)!=EOF; )
    {
        for(j=0; j<i; j++)
            if(x[j][0]==n)
            {
                x[j][1]++;
                break;
            }

        if(j==i)
            x[i][0]=n, x[i++][1]++;
    }
    for(j=0; j<i; j++)
        printf("%d %d\n",x[j][0],x[j][1]);

    return 0;

}
