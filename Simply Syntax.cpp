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
int main()    //271
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char sen[260];
    char C = 'C', D = 'D', E = 'E', I = 'I', n = 'N';

    while( gets(sen) != NULL )
    {
        len = strlen( sen );
        N = 0;

        for( i = len-1; i > -1; --i )
        {
            if( sen[i] > 111 && sen[i] < 123 )
                N++;
            else if( sen[i] == C || sen[i] == D || sen[i] == E || sen[i] == I )
            {
                if( N >= 2 )    N--;
                else { N = 0; break; }
            }
            else if( sen[i] == n )
            {
                if( N < 1 ) { N = 0; break; }
            }
        }

        if( N == 1 ) puts("YES");
        else    puts("NO");
    }


    return 0;
}

