#include<cstdio>
#include<iostream>
#include<cmath>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sn scanf("\n")
#define eps 1e-12
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 10499
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)

    LL n;

    while( scanf("%lld", &n) && n > 0 )
    {
        if( n == 1 ) printf("%lld%%\n", 0);
        else printf("%lld%%\n", n * 25);
    }


    return 0;
}
