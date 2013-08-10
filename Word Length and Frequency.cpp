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
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char str[105];
    map < int, int > word;
    map < int, int > :: iterator it;
    bool hipen = false;

    while( scanf("%s", str) != EOF )
    {
        if( str[0] == '#' ){

            for( it = word.begin(); it != word.end(); ++it )
                cout << (*it).first << ' ' << (*it).second << endl;

            pn;
        }

        if( !hipen )
            sum = 0;

        hipen = false;

        //cout << str << endl;

        for( i = 0; str[i]; ++i )
        {
            cout << str << ' ' << str[i];
            if( str[i] == '?' || str[i] == '!' || str[i] == ',' || str[i] == '.' )
            {
                word[sum]++;
                //cout <<sum;
                sum = 0;
            }
            else if( str[i] = '-' ) { hipen = true; break; }
            else  if( isalpha( str[i] ) )sum++;
        }

        if( !hipen && sum )
            word[sum]++;







    }





    return 0;
}
