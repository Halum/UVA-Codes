#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[3],i;
    for(;;)
    {
        for(i=0; i<3; i++)
            scanf("%d",&a[i]);
        if(a[0]==0 && a[1]==0 &&a[2]==0)
            break;
        sort(&a[0],&a[3]);

        if(a[2]*a[2] == a[1]*a[1] + a[0]*a[0])
            printf("right\n");
        else
            printf("wrong\n");

    }

    return 0;
}
