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
int main()    // 11278
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char str[1010];

    char qs[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
    char qc[] = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";

    char ds[] = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg\'";
    char dc[] = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

    while( gets( str ) != NULL ) // try using fgetc
    {
        for( i = 0; str[i]; ++i )
        {
            if( str[i] == ' ' ) printf(" ");
            else if( isupper( str[i] ) )
            {
                for( j = 0; j < 47; ++j)
                    if( qc[j] == str[i] )
                    {
                        printf("%c", dc[j]);
                        break;
                    }
            }
            else if( islower( str[i] ) || isdigit( str[i] ) )
            {
                for( j = 0; j < 47; ++j)
                    if( qs[j] == str[i] )
                    {
                        printf("%c", ds[j]);
                        break;
                    }
            }
            else
            {
                int flag = 0;
                for( j = 0; j < 47; ++j)
                    if( qs[j] == str[i] )
                    {
                        printf("%c", ds[j]);
                        flag = 1;
                        break;
                    }

                if( !flag )
                    for( j = 0; j < 47; ++j)
                        if( qc[j] == str[i] )
                        {
                            printf("%c", dc[j]);
                            flag = 1;
                            break;
                        }
            }
        }
        pn;
    }




    return 0;
}
