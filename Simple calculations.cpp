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
#define INF 99999999
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
double a[4000], c[4000];

double calc(int n)
{
    cout << " " << n << " ";
    if(n==N+1){
        cout << "-1th " << n << endl;
        return a[N+1];
    }
    else{
        cout << "1st " << n+1 << endl;
        a[n+1] = calc(n+1);
        return ( (a[n-1]+a[n+1])/2.0 - c[n] );
    }

}
//---------------------------------------------------->
int main()    //10014
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;

    while(T--){
        cin >> N;
        cin >> a[0] >> a[N+1];

        for(i=1; i<=N; ++i) cin >> c[i];

        cout << calc(1);
    }


    return 0;
}

