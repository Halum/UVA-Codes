
/*
ID: my.lost1
PROG: test
LANG: C++
*/
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
#define SIZE 35
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
int main()    //12464
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    LL a,b, n;

    while(cin >> a >> b >> n){
        if(!a and !b and !n) break;
        n %= 5;

        if(!n) cout << a << endl;
        else if(n==1) cout << b << endl;
        else if(n==2) cout << (b+1)/a << endl;
        else if(n==3) cout << (a+b+1)/(a*b) << endl;
        else if(n==4) cout << (a+1)/b << endl;

    }


    return 0;
}
