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
#define SIZE 1000;
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int rec(int n)
{
    if( n%10 ) return n%10;
    else if( !n ) return n;
    else
        while(1)
        {
            n /= 10;
            if( n%10 ) return n%10;
            else if( !n ) return n;
        }
}
//---------------------------------------------------->
int main()    // 10994
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->

    while( scanf("%d%d",&x,&y) )
    {
        if( x<0 && y<0) break;

        for( sum = 0; x <= y; ++x )
            sum += rec(x);

        printf("%d\n", sum);
    }





    return 0;
}

