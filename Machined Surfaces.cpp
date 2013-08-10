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

//---------------------------------------------------->
int main()    // 414
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    char img[26];
    int min, all, now;
    while( cin >> N  && N )
    {
       sc(ch);
       all = 0, T = N, min = 30;
       while( N-- )
       {
           gets( img );
           for( i = now = 0; i < 25; ++i )
               if( img[i] != 'X' ) ++now;

            all += now;
            if( now < min ) min = now;
       }

       all -= min * T;

       cout << all << endl;
    }

    return 0;
}
