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

//---------------------------------------------------->
int main()    //10763
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    map <int, int> cand;
    map <int, int>::iterator it;

    while( scanf("%d", &N) && N )
    {
        cand.clear();

        for( i = 0; i < N; ++i )
        {
            scanf("%d%d", &x, &y);
            cand[x]--;
            cand[y]++;
        }

        check = false;

        for( it = cand.begin(); it != cand.end(); ++it )
        {
            if( (*it).second )
            {
                check = true;
                break;
            }
        }

        if( check )
            cout << "NO\n";
        else
            cout << "YES\n";
    }


    return 0;
}

