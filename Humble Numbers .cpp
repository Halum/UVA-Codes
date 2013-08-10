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
#define SIZE 5843
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
int humble[SIZE];

void GenHumble( )
{
    int x, y, z, w;
    int a, b, c, d;

    humble[1] = a = b = c = d = 1;


    for( int i = 2; i < SIZE; ++i )
    {
        w = 2 * humble[a];
        x = 3 * humble[b];
        y = 5 * humble[c];
        z = 7 * humble[d];

        humble[i] = min( x, min( y, min(z, w ) ) );

        if( humble[i] == w ) a++;
        if( humble[i] == x ) b++;
        if( humble[i] == y ) c++;
        if( humble[i] == z ) d++;
    }
}
//---------------------------------------------------->
int main()    //443
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    GenHumble();

    while( scanf("%d", &N) && N )
    {
        if( N % 100 / 10 == 1 )
        {
            printf("The %dth humble number is %d.\n", N, humble[N] );
            continue;
        }

        temp = N % 10;

        switch( temp )
        {
            case 1: printf("The %dst humble number is %d.\n", N, humble[N] );
                break;
            case 2: printf("The %dnd humble number is %d.\n", N, humble[N] );
                break;
            case 3: printf("The %drd humble number is %d.\n", N, humble[N] );
                break;
            default: printf("The %dth humble number is %d.\n", N, humble[N] );
                break;
        }
    }


    return 0;
}
