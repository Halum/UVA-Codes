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
#define SIZE 1000;
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 409
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    /*char str[50];
    while( gets(str) != NULL )
        puts(str);*/
    map< string, int >ex;
    string a, b;
    int L, K;
    char str[22][75], tmp[75];
    int counter[22];

    while( scanf("%d%d",&L,&K) != EOF )
    {
        sn;
        ex.clear();

        for( i=1; i<=L; ++i )
        {
            cin >> a;
            ++ex[a];
        }
        sn;
        memset( counter, 0, sizeof counter );
        MAX = 0;

        for( i=1; i<=K; ++i )
        {
            gets(str[i]);
            for( j=0; str[i][j]; ++j )
                tmp[j] = tolower( str[i][j] );
            tmp[j] = 0;

            ptr = strtok( tmp, " @#\".,!?&" );

            if( ptr )
            {
                a = ptr;
                if( ex[a] ) counter[i]++;
            }

            while( ptr = strtok( NULL, " @#\".,!?&") )
            {
                a = ptr;
                if( ex[a] ) counter[i]++;
            }

            if( counter[i] > MAX ) MAX = counter[i];
        }

        printf("Excuse Set #%d\n",++l);

        for( i=1; i<=K; ++i )
            if( counter[i] == MAX )
                puts(str[i]);
        pn;
    }


    return 0;
}
