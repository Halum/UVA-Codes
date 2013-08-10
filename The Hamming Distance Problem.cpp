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
void  getHuming(int n, int k)
{
    int i, j;
    char str[n+1], ptr[n+1];

    memset(str, '0', sizeof str);
    memset(ptr, '0', sizeof ptr);
    str[n] = ptr[n] = 0;

    for(i=n-1, j=0; j<k; --i, ++j) str[i] = ptr[i] = '1';

    do{
        puts(str);
        next_permutation(str, str+n);
    }while(strcmp(str, ptr));
}
//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;

    while(T--){
        cin >> x >> y;

        if(l) puts("");
        else l=1;

        getHuming(x, y);

    }



    return 0;
}
