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
#define eps 1e-12
#define SIZE 215000
#define PI 3.141592653589793
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
int main()    //438
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    double x1, x2, x3, y1, y2, y3, a, b, c, R, S, res;

    while( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 )
    {
        if( cin.eof() )
            break;

        a = sqrt( pow((x1 - x2),2) + pow((y1 - y2),2) );
        b = sqrt( pow((x1 - x3),2) + pow((y1 - y3),2) );
        c = sqrt( pow((x2 - x3),2) + pow((y2 - y3),2) );

        S = ( a + b + c ) / 2;

        R = ( a * b * c ) / ( 4 * sqrt( S * (S-a) * (S-b) * (S-c) ) );

        res = 2 * PI * R;

        printf("%.2lf\n", res);
    }




    return 0;
}
