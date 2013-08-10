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
int GCD(int a, int b)
{
    if( !b )
        return a;
    return GCD(b, a % b);

    return 0;
}
//---------------------------------------------------->
int main()    // 10407
{
    register int i=0, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int num[1001], diff;

    while( cin >> num[i] && num[i] )
    {
        while( cin >> num[++i] && num[i] );

        sort( num, num+i );

        diff = num[1] - num[0];

        for( j = 2; j < i; ++j )
            diff = GCD( diff, num[j]-num[0] );

        printf("%d\n", diff);

        i = 0;
    }

    return 0;
}
