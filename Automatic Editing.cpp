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
bool pos;
char finde[10][85], rep[10][85];
char line[300], pin[300];
void REPLACE( char *str, char *get, char *rep, char *finde )
{
    len = strlen( finde );
    strcpy( pin, &get[len] );
    strcpy( get, rep );
    strcat( get, pin );
}
//---------------------------------------------------->
int main()    // 10115
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char *get;

    while( scanf("%d", &N) && N )
    {
        sn;
        for( i = 0; i < N; ++i )
        {
            gets( finde[i] );
            gets( rep[i] );
        }


        gets( line );

        for( i = 0; i < N; ++i )
        {
            while( 1 )
            {
                get = strstr( line, finde[i] );
                if( get )
                    REPLACE( line , get, rep[i], finde[i] );
                else
                    break;
            }
        }
        puts( line );
    }



    return 0;
}
