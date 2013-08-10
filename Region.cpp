#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#include<deque>
#include<set>
#include<algorithm>
#include<ctime>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sn scanf("\n")
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 215000
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    //10991
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    double r1, r2, r3, a, b, c, triangle, s, circle, A, B, C, res;

    cin >> T;

    while( T-- )
    {
        scanf("%lf %lf %lf", &r1, &r2, &r3);

        a = r2 + r3;
        b = r1 + r3;
        c = r1 + r2;

        s = (a + b + c) / 2;

        triangle = sqrt( s * (s-a) * (s-b) * (s-c) );

        A = acos((b*b + c*c - a*a) / (2 * b * c));
        B = acos((a*a + c*c - b*b) / (2 * a * c));
        C = PI - A - B;


        circle = (B * r2 * r2 + C * r3 * r3 + A * r1 * r1) / 2;

        res = triangle - circle;

        printf("%.6lf\n", res);

    }




    return 0;
}

