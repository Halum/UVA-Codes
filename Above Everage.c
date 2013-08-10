#include <stdio.h>
int main()
{
    int T, N, i, j, sum, s[1010];
    double avg, count;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        sum = 0;
        for(j=0; j<N; j++)
        {
            scanf("%d",&s[j]);
            sum+=s[j];
        }

        avg = (double)sum/N;
        count = 0;

        for(j=0; j<N; j++)
            if(s[j] > avg)
                count++;

        printf("%.3lf%%\n",count*100/N);
    }

    return 0;
}
