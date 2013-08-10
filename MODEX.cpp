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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define eps 1e-7
#define SIZE 12
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
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
int main()    // 1230
{
    //register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    LL b, p, m;

    cin >> T;

    while ( T-- )
    {
        cin >> b >> p >> m;
        cout << BigMod( b, p, m ) << endl;
    }
    cin >> T;

    return 0;
}
