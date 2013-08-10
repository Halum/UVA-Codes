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
int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->
long long int Divide(char Number[], long long int Divisor)
{ // you will have the mod in return;
    if(!Divisor) return false;

    long long int len=strlen(Number), cary=0, num;
    register int i;
    for(i=0; i<len; )
    {
        cary *= 10;
        num = Number[i++]-48 + cary;
        while(num<Divisor && i<len)
            if(num<Divisor && i<len) num = num*10 + Number[i++]-48;

        cary = num % Divisor;
    }
    if(!cary) return 0;
    return cary;
}
//---------------------------------------------------->
int main()    // 10070
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)

    char year[5001];

    while( gets(year) )
    {
        if( l ) pn;
        else l = 1;

        k = i = 0;

        if( (!Divide(year, 4) && Divide(year, 100)) || !Divide(year, 400) )
            printf("This is leap year.\n"), k = 1;
        if( !Divide(year, 15) )
            printf("This is huluculu festival year.\n"), i = 1;
        if( k && !Divide(year, 55) )
            printf("This is bulukulu festival year.\n");
        if( !k && !i )
            printf("This is an ordinary year.\n");
    }

    return 0;
}

