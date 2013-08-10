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
void SET_GET( int *p, int set )
{
    if( !set )
        for( int i = 0; i < N; ++i )
            p[i] = 1;
    else
        for( int i = 1; i < N; ++i )
            cin >> p[i];
}
//---------------------------------------------------->
int main()    // 111
{
    register int i, j=1, k, l=0;
    freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    int order[20];
    int sub[20];
    int L[20];
    int pos;

    cin >> N;

    cin >> order[0];

    SET_GET( order,1 );

    while( scanf("%d", &sub[0]) != EOF )
    {
        SET_GET( sub, 1 );
        SET_GET( L, 0 );

        for( i = 0; i < N; ++i )
        {
            for( j = 0; j < N; ++j )
                if( sub[i] == order[j] )
                {
                    pos = j;
                    break;
                }

            for( k = i+1; k < N; ++k )
            {
                for( l = pos+1; l < N; ++l )
                {
                    if( sub[k] == order[l] )
                    {
                        if( L[i] + 1 > L[k] )
                            L[k] = L[i] + 1;
                        break;
                    }
                }
            }
        }

        for( i = MAX = 0; i < N; ++i )
            if( L[i] > MAX ) MAX = L[i];

        cout << MAX << endl;
    }



    return 0;
}

