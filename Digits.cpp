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
char num[1000005];

int Length( int x0 )
{
    sprintf( num, "%d" , x0 );

    len = strlen( num );

    total++;
    if( len == x0 ) return total;

    return Length( len );
}

//---------------------------------------------------->
int main()    //11687
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    while( gets( num ) && isdigit( num[0] ) )
    {
        if( !strcmp( num, "1" ) )
        {
            puts("1");
            continue;
        }

        total = 1;

        printf("%d\n",Length( strlen( num ) ));
    }



    return 0;
}
