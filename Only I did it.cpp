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
map <int, int> frnd[4];
map <int, int> :: iterator it;
int uniq[4];

void Get( int num )
{
    cin >> N;

    for( int i =0; i < N; ++i )
    {
        cin >> x;
        frnd[0][x]++;
        frnd[num][x]++;
    }
}

void Print( int num )
{
    printf("%d %d", num, MAX);

    for( it = frnd[num].begin(); it != frnd[num].end(); ++it )
    {
        int temp = (*it).first;
        if( frnd[0][temp] == 1 and frnd[num][temp] == 1 )
            printf(" %d", (*it).first );
    }

    cout << endl;
}
//---------------------------------------------------->
int main()    //11222
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;

    for( i = 1; i <= T; ++i )
    {
        frnd[0].clear();
        frnd[1].clear();
        frnd[2].clear();
        frnd[3].clear();

        Get( 1 );
        Get( 2 );
        Get( 3 );

        MAX = uniq[1] = uniq[2] = uniq[3] = 0;

        for( it = frnd[0].begin(); it != frnd[0].end(); ++it )
        {
            if( (*it).second == 1 )
            {
                temp = (*it).first;
                if( frnd[1][temp] == 1 )
                    uniq[1]++;

                if( frnd[2][temp] == 1 )
                    uniq[2]++;

                if( frnd[3][temp] == 1 )
                    uniq[3]++;
            }
        }

        MAX = max( uniq[1], max( uniq[2], uniq[3] ) );

        printf("Case #%d:\n", i);

        for( j = 1; j <4; ++j )
            if( MAX == uniq[j] )
                Print( j );

    }


    return 0;
}

