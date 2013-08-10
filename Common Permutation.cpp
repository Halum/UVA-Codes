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
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->
char str[ SIZE ];
int s1[ 27 ], s2[ 27 ];
//---------------------------------------------------->
int main()    // 10252
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    while( gets( str ) )
    {
        len = strlen( str );
        for( i=0; i<len; i++)
            s1[ str[i]-96 ]++;

        gets(str);

        len = strlen( str );
        for( i=0; i<len; i++)
            s2[ str[i]-96 ]++;


        for( i=1; i<27; i++ )
        {
            if( s1[i] && s2[i] )
            {

                len = min( s1[i], s2[i] );
                while( len-- )
                    printf("%c",i+96 );
            }

            s1[ i ] = s2[ i ] = 0;
        }
        pn;
    }


    return 0;
}
