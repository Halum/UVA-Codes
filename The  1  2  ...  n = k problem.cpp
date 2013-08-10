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

//---------------------------------------------------->
int main()    //10025
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    LL res, n, K;

    cin >> T;

    while( T-- )
    {
        cin >> K;

        K = K < 0 ? K * -1 : K;

        n = sqrt( 2 * K );

        if( K % 2 )
        {
            res = n * (n + 1) / 2;

            while( res < K || res % 2 == 0 )
            {
                ++n;
                res = n * (n + 1) / 2;
            }
        }
        else
        {
            res = n * (n + 1) / 2;

            while( res < K || res % 2 )
            {
                ++n;
                res = n * (n + 1) / 2;
            }
        }

        l ? pn : ++l;

        n = K == 0 ? 3 : n;

        cout << n << endl;
    }


    return 0;
}

