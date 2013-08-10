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
#define SIZE 1002
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
int num[SIZE];

int SoF( int n )
{
    int sum = 1;

    for( int i = 2; i <= n; ++i )
    {
        if( n % i == 0 )
            sum += i;
        if( sum > 1000 )
            break;
    }

    return sum;
}
//---------------------------------------------------->
int main()    //11728
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    //memset( num, -1, sizeof num );

    for( i = 1; i < 1001; ++i )
    {
        temp = SoF( i );
        if( temp < 1001 )
            num[temp] = i;
    }

    while( cin >> N && N )
    {
        printf("Case %d: ", ++l);
        if( num[N] )
            printf("%d\n", num[N] );
        else puts("-1");
    }


    return 0;
}
