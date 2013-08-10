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
LL T,  len, N, sum, pen, cary, res, ans, counter, temp;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 11526
{
    register LL i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
//---------------------------------------------------->
int prev, root;
    cin >> T;

    while( T-- )
    {
        cin >> N;

        if( N <= 0 )
        {
            printf("0\n");
            continue;
        }

        root = sqrt( N );
        sum = prev = N;

        for( i=2, j=1; i<=root; ++i, ++j )
        {
            temp = N / i;
            sum += temp + (prev - temp) * j;
            prev = temp;
        }

        if( prev != root )
        {
            temp = N / i;
            sum += (prev - temp) * j;
        }
        cout << sum << endl;

    }

    return 0;
}
