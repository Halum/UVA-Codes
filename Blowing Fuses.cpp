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
int main()    // 661
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int n, m, c;
    int device[21][2];


    while( scanf("%d%d%d", &n, &m, &c) && m+n+c )
    {
        printf("Sequence %d\n", ++l );

        check = MAX = sum = 0;
        memset( device, 0, sizeof device );

        for( i=1; i<=n; ++i )
            scanf("%d",&device[i][0]);

        for( i=1; i<=m; ++i )
        {
            scanf("%d",&x);

            if( !check )
            {
                if( !device[x][1] )
                {
                    sum += device[x][0];
                    device[x][1] = 1;
                }
                else if( device[x][1] )
                {
                    sum -= device[x][0];
                    device[x][1] = 0;
                }

                if( sum > MAX ) MAX = sum;
                if( sum > c ) check = 1;
            }
        }

        if( check )
            printf("Fuse was blown.\n\n");
        else
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", MAX );
    }

    return 0;
}
