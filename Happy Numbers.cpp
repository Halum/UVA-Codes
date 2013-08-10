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
#define SIZE 99999
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
map <int, int> hapy;
map <int, bool> unhapy;
map <int, bool> detect;

int DigSqr( int  num )
{
    sum = 0;
    //printf("%d ", num);
    while( num )
    {
        temp = num % 10;
        sum += temp * temp;
        num /= 10;
    }

    //printf("%d\n", sum);

    return sum;
}
//---------------------------------------------------->
int main()    //944
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    hapy[1] = 1;
    for( i = 2; i <= SIZE; ++i )
    {
        if( unhapy[i] == true )
            continue;
        else if( hapy[i] > 0 )
            continue;
        else
        {
            detect.clear();
            detect[i] = 1;
            x = i;
            for( j = 1; ; ++j )
            {
                x = DigSqr( x );

                if( hapy[x] > 0 )
                {
                    hapy[i] = j + hapy[x];
                    break;
                }
                else if( x == 1 )
                {
                    hapy[x] = j;
                    break;
                }
                else if(  x == 4 )
                    break;
                else if( detect[x] == true )
                {
                    unhapy[x] = true;
                    break;
                }
                else detect[x] = true;
            }
        }
    }

    while( scanf("%d%d", &x, &y) != EOF )
    {
        if( l ) pn;
        else l++;

        for( i = x; i <= y; ++i )
            if( hapy[i] > 0 )
                printf("%d %d\n", i, hapy[i]);
    }


    return 0;
}

