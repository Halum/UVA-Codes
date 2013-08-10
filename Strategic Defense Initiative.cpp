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
#define SIZE 10000
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
int num[SIZE], L[SIZE], res[SIZE];

void LIS( )
{
    for( int i = 0; i < len; ++i )
    {
        for( int j = i+1; j < len; ++j )
        {
            if( num[j] > num[i] )
            {
                if( L[j] < L[i] + 1 )
                    L[j] = L[i] + 1;
            }
        }
    }

    MAX = temp = 0;

    for( int i = 0; i < len; ++i ){
        if( MAX < L[i] )    MAX = L[i], temp = i;
    }

}
//---------------------------------------------------->
int main()    //497
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char str[5];

    T = atoi( gets(str) );
    gets( str );

    for( k = 1; k <= T; ++k )
    {
        len = 0;

        while( gets( str ) && strlen( str ) )
        {
            N = atoi( str );
            num[len] = N;
            L[len++] = 1;
        }

        LIS();

        printf("Max hits: %d\n", MAX);

        MAX = 0;

        res[0] = num[temp];


        for( i = temp-1, j = 1; i >= 0; --i )
        {
            if( num[i] < num[temp] )
            {
                if( L[i] == L[temp]-1 )
                {
                    res[j++] = num[i];
                    temp = i;
                }
            }
        }

        reverse( res, res+j );

        for( i = 0; i < j; ++i )
            printf("%d\n", res[i] );

        if( k < T ) pn;
    }





    return 0;
}
