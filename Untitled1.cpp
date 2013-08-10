#include<stdio.h>
#include<math.h>
#define SIZE 1000000


int i, j, k, N, div, lim;
int prime[165608], chk;
bool sieve[ SIZE ];
void GenPrime()
{
    int root = sqrt( SIZE );
    k = 1;
    prime[0] = 2;
    for( i=3; i <= root; i+=2 )
        if( !sieve[i] )
        {
            prime[k++] = i;
            for( j=i+i; j<=SIZE; j+=i )
                sieve[j] = 1;
        }


    for( i=prime[k-1]; i <= SIZE; i+=2 )
        if( !sieve[i] )
            prime[k++] = i;
}

int main()
{
    GenPrime();

    while( scanf("%d",&N) && N )
    {
        printf("%d:\n",N);
        if( N % 2 )
        {
            if( !sieve[N-2] && (N-2)%2 ) printf("2+%d\n",N-2);
            else printf("NO WAY!\n");
            continue;
        }
        //lim = N/2;
        for( i=chk=0; prime[i]*prime[i] <= N+1; ++i)
        {
            div = N-prime[i];
            if( !sieve[div] && div%2 )
            {
                printf("%d+%d\n",prime[i], N-prime[i]);
                chk = 1;
                break;
            }
        }
        if( !chk ) printf("NO WAY!\n");
    }

    return 0;
}
