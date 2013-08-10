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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define eps 1e-7
#define SIZE 12
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dum;
bool check;
//---------------------------------------------------->
int one ( char str[] )
{
    N = 0;
    if ( str [ 0 ] == 'o' ) N++;
    if ( str [ 1 ] == 'n' ) N++;
    if ( str [ 2 ] == 'e' ) N++;
    return N;
}
//---------------------------------------------------->
int main()    // 12289
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char num[8];
    scanf ( " %d " , &T );

    while ( T-- )
    {
        gets( num );

        if ( !num[ 3 ] )
        {
            if ( one ( num ) > 1 ) printf( "1\n" );
            else printf ( "2\n" );
        }
        else printf ( "3\n" );
    }


    return 0;
}

