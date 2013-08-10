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
map <int, int> chimp;
map <int, int>::iterator it, next, prev;
//---------------------------------------------------->
int main()    //10611
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    chimp[0] = 0;
    scanf("%d", &T);

    while( T-- )
    {
        scanf("%d", &x);
        chimp[x] = 1;
    }

    scanf("%d", &T);

    while( T-- )
    {
        scanf("%d", &x);
        if( chimp[x] > 0 )
        {
            it = next = prev = chimp.find( x );
            check = false;

            for( ; prev != chimp.begin(); --prev )
                if( (*prev).second == 1 && (*prev).first < x )
                {
                    check = true;
                    printf("%d ", (*prev).first );
                    break;
                }
            if( !check )
                printf("X ");

            check = false;

            for( ; next != chimp.end(); ++next )
                if( (*next).second == 1 && (*next).first > x )
                {
                    check = true;
                    printf("%d\n", (*next).first );
                    break;
                }

            if( !check )
                printf("X\n");
        }
        else
        {
            chimp[x] = 2;

            it = next = prev = chimp.find( x );
            check = false;

            for( ; prev != chimp.begin(); --prev )
                if( (*prev).second == 1 && (*prev).first < x )
                {
                    check = true;
                    printf("%d ", (*prev).first );
                    break;
                }
            if( !check )
                printf("X ");

            check = false;

            for( ; next != chimp.end(); ++next )
                if( (*next).second == 1 && (*next).first > x )
                {
                    check = true;
                    printf("%d\n", (*next).first );
                    break;
                }

            if( !check )
                printf("X\n");

            chimp.erase( x );

        }
    }


    return 0;
}

