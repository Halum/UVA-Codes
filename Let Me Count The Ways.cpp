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
ULL ways[30005];

void change(int *coin, int total, int price, ULL *ways){
    int i, j;
    ways[0] = 1;

    for(i=0; i<total; ++i)
        for(j=coin[i]; j<=price; ++j)
            ways[j] += ways[j-coin[i]];
}
//---------------------------------------------------->
int main()    //357
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int coin[] = {1, 5, 10, 25, 50};

    change(coin, 5, 30000, ways);

    while( scanf("%d",&N) != EOF){
        if(ways[N] == 1 ) printf("There is only 1 way to produce %d cents change.\n",N);
        else printf("There are %llu ways to produce %d cents change.\n", ways[N],N);
    }

    return 0;
}

