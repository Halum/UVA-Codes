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
#define prime 131071
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
long long int MOD( char *bin )
{
    LL rem = 0;

    for( int i = 0; bin[i+1]; ++i )
    {
        rem = rem * 2 + bin[i] - 48;
        rem %= prime;
    }
    return rem;
}
//---------------------------------------------------->
int main()    // 10176
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char bin[10010];
    i = 0;

    while( gets( &bin[i] ) != NULL )
    {
        len = strlen( bin ); // &bin[i]

        if( bin[len-1] == '#' )
        {
            if( MOD( bin ) ) // pass len
                puts("NO");
            else
                puts("YES");
            i = 0;
        }

        else i = len;
    }



    return 0;
}
