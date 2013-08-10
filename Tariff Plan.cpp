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
int main()    //12157
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;
    int dur[21], mile=0, juic=0;

    for(i=1; i<= T; ++i){
        scanf("%d", &N);

        mile=juic=0;

        for(j=0; j<N; ++j){
            scanf("%d", &dur[j]);

            mile += dur[j] / 30 * 10;
            mile += 10;

            juic += dur[j] / 60 * 15;
            juic += 15;
        }

        printf("Case %d: ",i);
        if(mile<juic) printf("Mile %d\n",mile);
        else if(mile>juic) printf("Juice %d\n",juic);
        else printf("Mile Juice %d\n",mile);
    }


    return 0;
}
