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
char dic[1000][15];
bool f[50];
char str[50];
//---------------------------------------------------->
int main()    // 895
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    while( gets( dic[l++] ) )
    {
        if( dic[l-1][0] == '#' )
            break;
    }

    while( gets( str ) )
    {
        if( str[0] == '#' )
            break;

        total = 0;
        for( i = 0; i < l-1; ++i )
        {
            memset( f, 0, sizeof f );

            check = false;
            for( j = 0; dic[i][j]; ++j )
            {
                for( k = 0; str[k]; ++k )
                {
                    if( str[k] == dic[i][j] && !f[k] )
                    {
                        f[k] = true;
                        break;
                    }
                }
                if( !str[k] )
                {
                    check = true;
                    break;
                }
            }
            if( !check )
                total++;
        }
        printf("%d\n", total);
    }



    return 0;
}

