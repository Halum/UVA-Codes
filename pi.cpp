#include<stdio.h>
#include<math.h>
 // END OF LIBRARY
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
int GCD(int a, int b)
{
    if( a + b )
    {
        if( !b )
            return a;
        return GCD(b, a % b);
    }
    return 0;
}
int main()    // 412
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
    int num[51], counter, total;
    double res;

    while( scanf("%d",&N) && N )
    {
        for( i=0; i<N; ++i )
            scanf("%d",&num[i]);

        for( i=counter=total=0; i<N; ++i )
            for( j=i; j<N; ++j )
            {
                if( i != j )
                {
                    total++;
                    if( GCD( num[i], num[j] ) == 1 )
                        counter++;
                }
            }

        if( counter )
        {
            res = (double) counter / total / 6;

            res = 1 / res;
            res = sqrt( res );

            printf("%.6lf\n", res);
        }
        else printf("No estimate for this data set.\n");
    }



    return 0;
}
