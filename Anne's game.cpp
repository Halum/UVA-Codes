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
long long Square(long long int N)
{
    return N*N;
}

long long int BigMod(long long int Number, long long int Power, long long int Divisor)
{
    if(!Power) return 1;

    if(Power%2==0) return Square(BigMod(Number, Power/2, Divisor)) % Divisor;

    return ((Number%Divisor) * BigMod(Number, Power-1, Divisor)) %Divisor;
}
//---------------------------------------------------->
int main()    // 10070
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
//---------------------------------------------------->
    LL cir, mod = 2000000011;
    cin >> T;

    for( i=1; i<=T; i++ )
    {
        scanf("%lld",&cir);

        printf("Case #%d: ",i);

        if( cir == 1 )
        {
            cout << 1 << endl;
            continue;
        }

        printf("%lld\n",BigMod( cir, cir-2, mod ));
    }

    return 0;
}
