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
int main()    // 156
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char word[115][22], tmp[22];
    string str;
    map< string, int >dic, sorted;
    map< string, int >::iterator it;

    for( j=2; scanf("%s",word[j]) ; ++j )
    {
        if( !strcmp(word[j], "#") ) break;

        for( k=0; word[j][k]; ++k )
            tmp[k] = tolower( word[j][k] );
        tmp[k] = 0;

        sort( tmp, tmp+k );

        str = tmp;

        if( !dic[tmp] ) dic[tmp] = j;
        else dic[tmp] = 1;
    }

    for( it=dic.begin(); it!=dic.end(); ++it )
    {
        if( (*it).second > 1 )
        {
            str = word[ (*it).second ];
            sorted[str]++;
        }
    }

    for( it=sorted.begin(); it!=sorted.end(); ++it )
        cout << (*it).first << endl;

    return 0;
}
