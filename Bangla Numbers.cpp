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
int main()    // 10101
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    /*1
    12
    123
    1000
    23764
    45897458973958
    999999999999999
    909090090909009
    100000010000000
    100000000000000
    40000000040000
    0
    */
    int part[9];
    char text[9][10] = { "\0", "shata", "hajar", "lakh", "kuti", "shata", "hajar", "lakh", "kuti" };

    LL num;

    while( scanf("%lld", &num) != EOF )
    {
        printf("%4d.", ++l);

        if( !num )
        {
            cout << ' ' << 0 << endl;
            continue;
        }

        memset( part, 0, sizeof part );

        for( i=0; num; ++i )
        {
            if( i == 1 || i == 5 )
                part[i] = num % 10, num /= 10;
            else
                part[i] = num % 100, num /= 100;
        }


        x = y = 0;

        for( i = 8; i > 0 ; --i )
        {
            if( i > 4  && part[i] )
                x = 1;
            else if( i > 3 && part[i] )
                y = 1;
            else if( i == 3 &&  x && !y  )
                printf(" kuti");

            if( part[i] )
                printf(" %d %s", part[i], text[i] );
        }

        if( part[0] )
            printf(" %d", part[0] );
        pn;
    }


    return 0;
}
