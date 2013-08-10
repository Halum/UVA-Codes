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
int main()    //102
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char bin[6][5] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    int move[6];
    int b1, b2, b3, g1, g2, g3, c1, c2, c3, pos;

    while( scanf("%d%d%d%d%d%d%d%d%d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF )
    {

        move[0] = b2 + b3 + c1 + c3 + g1 + g2;
        move[1] = b2 + b3 + g1 + g3 + c1 + c2;
        move[2] = c2 + c3 + b1 + b3 + g1 + g2;
        move[3] = c2 + c3 + g1 + g3 + b1 + b2;
        move[4] = g2 + g3 + b1 + b3 + c1 + c2;
        move[5] = g2 + g3 + c1 + c3 + b1 + b2;

        MIN = move[0];
        pos = 0;

        for( int i=1; i<6; ++i )
            if( move[i] < MIN )
                MIN= move[i], pos = i;


        printf("%s %d\n", bin[pos], MIN);
    }


    return 0;
}
