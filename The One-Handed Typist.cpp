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
int main()    // 10393
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    map<string, int> word;
    map<string, int>::iterator it;
    string tmp;
    char str[55];
    char finger[10][10] = { "qaz", "wsx", "edc", "rfvtgb", "", "", "yhnujm", "ik", "ol", "p" };
    int useles[10];

    while( scanf("%d%d", &x, &y) != EOF )
    {
        for( i = 0; i < x; ++i )
            scanf("%d", &useles[i]);
        sn;
        total = 0;
        len = 0;
        word.clear();

        for( i = 0; i < y; ++i )
        {
            gets( str );
            check = 0;

            for( j = 0; j < x; ++j )
            {
                temp = useles[j] -1;
                for( k = 0; finger[temp][k]; ++k )
                {
                    for( l = 0; str[l]; ++l )
                    {
                        if( str[l] == finger[temp][k] )
                        {
                            check = true;
                            break;
                        }
                    }
                    if( check ) break;
                }
                if( check ) break;
            }

            if( !check )
            {
                tmp = str;
                sum = strlen( str );
                if( len < sum)
                    len = sum, total = 1;
                else if( len == sum && !word[tmp] )
                    total++;
                word[tmp] = sum;
            }
        }

        printf("%d\n", total);
        for( it = word.begin(); it != word.end(); ++it )
            if( (*it).second == len )
                cout << (*it).first << endl;
    }



    return 0;
}

