#include<cstdio>
#include<iostream>
#include<cmath> // END OF LIBRARY
//---------------------------------------------------->

//---------------------------------------------------->

//---------------------------------------------------->
using namespace std;

int main()    // 10432
{
    double r, n, angle, ans, pi = 2 * 2 * acos( 0.0 );

    while( scanf("%lf%lf", &r,&n) != EOF )
    {
        angle = pi / n;

        ans = 0.5 * r * r * sin( angle ) * n;

        printf("%.3lf\n" ,ans);
    }

    return 0;
}
