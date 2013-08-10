#include<stdio.h>
int main()
{
    int T, i, j, N, p[10];

    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);

        for(j=0; j<N; j++)
            scanf("%d",&p[j]);

        printf("Case %d: %d\n",i,p[N/2]);
    }

    return 0;
}
