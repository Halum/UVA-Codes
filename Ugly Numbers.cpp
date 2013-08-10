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
#define SIZE 1501
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
int ugly[SIZE];

void Ugly()
{
    int a, b, c, x, y, z, i;

    ugly[1] = a = b = c = 1;

    for( i = 2; i < SIZE; ++i )
    {
        x = 2 * ugly[a];
        y = 3 * ugly[b];
        z = 5 * ugly[c];

        ugly[i] = min( x, min( y, z ) );

        if( ugly[i] == x ) a++;
        if( ugly[i] == y ) b++;
        if( ugly[i] == z ) c++;
    }
}
//---------------------------------------------------->
int main()    //136
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    Ugly();

    printf("The 1500'th ugly number is %d.\n", ugly[1500] );


    return 0;
}

