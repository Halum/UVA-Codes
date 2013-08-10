/*
ID: my.lost1
PROG: test
LANG: C++
*/
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
#define SIZE 35
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
double ways[6010];
void coinChange(int *coin, int totalCoins, int limit, double *ways)
{
    int i, j;

    ways[0] = 1;

    for( i = 0; i < totalCoins; ++i )
        for( j = coin[i]; j < limit; ++j )
            if ( j - coin [i] >= 0 )
                ways[j] += ways[j - coin[i]];

}
//---------------------------------------------------->
int main()    // 147
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int a[] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};

    double c;

    coinChange(a, 11, 6002, ways);

    while ( cin >> c ) {


        if ( c == 0 ) break;

        int index = c * 20;


        printf ("%6.2lf%17.lf\n", c, ways[index]);

    }


    return 0;
}
