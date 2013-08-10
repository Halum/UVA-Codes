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
#define SIZE 215000
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
int main()    //10137
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    double st[1000];
    double avg, pos, neg, hi, lo;

    while( cin >> N && N )
    {
        for( i = avg = 0; i < N; ++i )
        {
            cin >> st[i];
            avg += st[i];
        }

        hi = (int)((avg/N+0.0099)*100);
        lo = (int)((avg/N)*100);

        hi /= 100;
        lo /= 100;

        for( i = pos = neg = 0; i < N; ++i )
        {
            if( st[i] > hi )
                pos += st[i] - hi;
            else if( st[i] < lo )
                neg += lo - st[i];
        }


        if( pos > neg )
            printf("$%.2lf\n", pos);
        else
            printf("$%.2lf\n", neg);
    }


    return 0;
}
