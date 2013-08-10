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
string str, sub;
bool isSub( int sublen )
{
    total = len / sublen;

    if( total * sublen != len )
        return false;

    int start = 0;
    sub = str.substr( 0, sublen );

    while( total-- )
    {
        if( sub != str.substr( start, sublen ) ) return false;
        start += sublen;
    }

    return true;
}

//---------------------------------------------------->
int main()    //455
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    scanf ("%d", &T);

    while( T-- )
    {
        cin >> str;
        if( l ) printf("\n");
        else ++l;

        len = str.length();

        for( i = check = 0; i < len; ++i )
            if( isSub( i + 1 ) ) { check = true; printf("%d\n", i+1); break; }


        if( !check )
            printf("%d\n", len );
    }


    return 0;
}
