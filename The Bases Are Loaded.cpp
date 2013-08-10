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
bool inRange( char ch ){ return ch >= 'A' && ch < 'F' ? true : false; }
/*{

    if( ch >= 'A' && ch <= 'F' )
        return true;
    return false;
}*/

int minBase( char *num )
{
    MAX = 0;

    for( int i = 0; num[i]; ++i )
        if( isdigit( num[i] ) ) { if( num[i]-48 > MAX )    MAX = num[i] - 48; }
        else if( inRange( num[i] ) ) { if( num[i]-55 > MAX )    MAX = num[i] - 55 }
        else { MAX = 0; break; }

    return MAX;
}

void baseUp( char *a, char *b, int base )
{
    int i = 0;
    len = strlen( a );

    for( int j = len-1; j > -1; --j )
    {
        if( isdigit(a[j]) ) temp = pow( base, i ) * (a[j] - 48);
        else temp = pow( base, i ) * (a[j] -55);
    }



}
//---------------------------------------------------->
int main()    //355
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char num[15], cnvrtd[15];
    int base1, base2;

    while( scanf("%d %d %s" , base1, base2, num ) != EOF )
    {
        N = minBase( num );

        if( !N || N <= base1 )  printf("%s is an illegal base %d number\n" , num, base1 );
        else
        {
            baseUp( num, cnvrtd, base2 );
            printf("%s base %d = %s base %d\n" , num, base1, cnvrtd, base2 );
        }
    }

    return 0;
}

