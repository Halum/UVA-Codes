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
int main()    //12324
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;
    LL in, tmp;
    double tx;

    for(i=1; i<=T; ++i){
        cin >> in;
        printf("Case %d: ",i);
        if(in <= 180000) cout << 0 << endl;
        else{
            tmp = in-180000;
            if( tmp <= 300000 ) tx = 10*tmp/100;
            else tx = 30000;
            cout << tx;

            tmp -= 300000;
            if(tmp<=400000) tx += 15*tmp/100;
            else tx += 60000;

            tmp -= 400000;
            if(tmp<=300000) tx += 20*tmp/100;
            else tx += 60000;

            tmp -= 300000;
            tx += 25*tmp/100;

            tmp = tx;
            //cout << tx << endl << tmp;
            //if(tmp<2000) cout << 2000 << endl;
            //else cout << ceil(tx) << endl;
        }
    }


    return 0;
}
