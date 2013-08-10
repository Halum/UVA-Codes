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
#define SIZE 7495
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
char coin[] = { 50, 25, 10, 5, 1 };
int ways[SIZE];

void calWays()
{
    int i, j;

    ways[0] = 1;

    for( i = 0; i < 5; ++i )
        for( j = coin[i]; j < SIZE; ++j )
            ways[j] += ways[j - coin[i]];
}
//---------------------------------------------------->
int main()    //674
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    calWays();

    while( scanf("%d",&N) != EOF )
        printf("%d\n" , ways[N] );


    return 0;
}

