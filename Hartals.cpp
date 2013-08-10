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
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T=9,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 10050
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
//---------------------------------------------------->
    int h[101];
    bitset<3651>hartal;

    cin >> T;

    while( T-- )
    {
        int day, fri, sat, p;
        hartal.reset();
        cin >> day >> p;

        for( i=1; i<=p; ++i )
            cin >> h[i];

        for( i=1; i<=p; ++i )
        {
            fri = 6, sat = 7;
            for( j=1; j<=day; ++j )
            {
                if( j==fri ) fri+= 7;
                else if( j == sat ) sat += 7;
                else if( j % h[i] == 0 ) hartal.set(j);
            }
        }

        cout << hartal.count() << endl;
    }



    return 0;
}

