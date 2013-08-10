#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N, i, a[2000003];
    for(; scanf("%d",&N); )
    {
        if(N==0)
            break;
        for(i=0; i<N; i++)
            scanf("%d",&a[i]);

        sort(&a[0], &a[N]);

        printf("%d",a[0]);
        for(i=1; i<N; i++)
            printf(" %d",a[i]);
        printf("\n");
    }




    return 0;
}
