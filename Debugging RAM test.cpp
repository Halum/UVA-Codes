#include<windows.h>
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
int Bin_Dec( char *binary )
{
    int dec = 0, i = 0;
    int len = strlen( binary );
    dec += binary[i] - 48;
    for( ; i < len-1; ++i )
    {
        dec *= 2;
        dec += binary[i+1] - 48;

    }

    return dec;
}
//---------------------------------------------------->
int main()    // 11736
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    //map<string, int> ram;
    char bits[2000], ram[200][25], tmp[20];
    int bit, var, byte[200], value[200];


    while( scanf("%d%d", &bit, &var) != EOF )
    {

        for( i = 0; i < var; ++i )
        {
            scanf("%s %d", ram[i], &byte[i]);
        }

        for( i = 0; i < var; ++i )
        {
            bits[0] = 0;
            for( j = 0; j < byte[i]; ++j )
            {
                scanf("%s", tmp);
                strcat( bits, tmp );
            }
            value[i] = Bin_Dec( bits );
        }

        scanf("%d", &N);

        while( N-- )
        {
            scanf("%s", bits);
            printf("%s=", bits);
            for( i = 0; i < var; ++i )
                if( !strcmp(bits, ram[i]) )
                {
                    printf("%d", value[i]);
                    break;
                }
            pn;
        }


    }






    return 0;
}

