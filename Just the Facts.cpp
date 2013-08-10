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
#define SIZE 10002
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
int factLast[SIZE];

void calcLast( int lim )
{
    int fact;
    factLast[0] = factLast[1] = fact = 1;

    for( int i = 2; i < lim; ++i )
    {
        fact *= i;

        while( fact % 10 == 0 )
            fact /= 10;

        fact %= 100000;

        factLast[i] = fact % 10;
    }
}

//---------------------------------------------------->
int main()    //568
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    calcLast( SIZE );

    while( scanf("%d", &N) != EOF )
        printf("%5d -> %d\n" , N , factLast[N] );

    return 0;
}

