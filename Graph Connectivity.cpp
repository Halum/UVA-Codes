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
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, pen, x, y, cary, res, ans, counter, temp, MAX, MIN;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 459
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
//---------------------------------------------------->
    char node[27][80];
    char str[5], samp[2] = "s";
    int flag = 0;

    cin >> T;

    while( T-- )
    {
        sn;

        gets( str );

        MAX = str[0] -64;

        for( i=1; i<=MAX; ++i )
            node[i][0] = i+64, node[i][1] = 0;

        while( gets(str) != NULL )
        {
            if( !str[0] ) break;

            // assigning valuse to corresponding array
            for( i=check=0; str[i]; ++i )
            {
                if( isupper(str[i]) )
                {
                    N = str[i]-64;
                    if( !check )
                    {
                        samp[0] = str[i+1];
                        strcat( node[N], samp );
                        check = true;
                    }
                    else
                    {
                        samp[0] = str[i-1];
                        strcat( node[N], samp );
                    }
                }
            }
        }

        // moving connected values to only one array
        for( i = 1; i<=MAX; ++i )
        {
            for( j=0; node[i][j]; ++j )
            {
                for( k=i; k<=MAX; ++k )
                {
                    if( k!=i )
                        for( l=0; node[k][l]; ++l )
                        {
                            if( node[i][j] == node[k][l] )
                            {
                                strcat( node[i], node[k] );
                                node[k][0] = 0;
                            }

                        }
                }
            }
        }

        for( i = counter = 0; i<=MAX; ++i )
            if( node[i][0] ) counter++;

        if( flag ) pn;
        else flag = 1;

        cout << counter << endl;
    }

    return 0;
}
