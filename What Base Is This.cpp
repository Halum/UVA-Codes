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
int minBase( char *p )
{
    for( int i = MAX = 0; p[i]; ++i  )
    {
        if( isdigit( p[i] ) )
        {
            if( p[i] - 48 > MAX )   MAX = p[i] - 48;
        }
        else
        {
            if( p[i] - 55 > MAX )   MAX = p[i] - 55;
        }
    }

    return MAX + 1;
}

long long baseValue( char *p, LL base )
{
    LL sum = 0;

    int len = strlen( p );

    for( int i = len-1, j = 0; i > -1; --i, ++j )
    {
        if( isdigit( p[i] ) )   sum += (p[i] - 48) * pow( base, j );

        else sum += (p[i] - 55) * pow( base, j );
    }
    //cout << sum << endl;

    return sum;
}
//---------------------------------------------------->
int main()    //343
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    map <LL, LL> base1;
    LL I, J, X, p, q;
    char a[50], b[50];

    while( scanf("%s %s", a, b) != EOF )
    {
        base1.clear();

        check = true;

        I = minBase( a );
        J = minBase( b );

        I = I == 1 ? 2:I;
        J = J == 1 ? 2:J;

        for( ; I < 37; ++I)
        {
            X = baseValue( a, I );

            if( base1[X] > 0 );
            else base1[X] = I;
        }

        for( ; J < 37; ++J )
        {
            X = baseValue( b, J );

            if( base1[X] > 0 )
            {
                p = base1[X], q = J;
                check = false;
                break;
            }
        }


        if( check ) printf("%s is not equal to %s in any base 2..36\n", a, b );

        else printf("%s (base %lld) = %s (base %lld)\n", a, p, b, q );
    }






    return 0;
}
