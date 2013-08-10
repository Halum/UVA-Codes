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
#define SIZE 1000;
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 1225
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int dig[10];

    cin >> T;

    while( T-- )
    {
        cin >> N;
        memset( dig, 0, sizeof dig );

        for( i=1, j=0; i<=N; ++i )
        {
            x = i;

            while( x )
            {
                temp = x % 10;
                dig[ temp ]++;
                x /= 10;
            }
        }

        printf( "%d", dig[0] );
        for( i=1; i<10; ++i )
            printf( " %d", dig[i] );
        pn;

    }



    return 0;
}
