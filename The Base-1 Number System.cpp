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
char num[1000], *p;
int flag;
vector <int> bin;

int BIN_DEC(  )
{
    int sum = 0;

    reverse( bin.begin(), bin.end() );

    for( size_t i = 0; i < bin.size(); ++i )
        sum += pow( 2, i ) * bin[i];

    return sum;
}
//---------------------------------------------------->
int main()    //11398
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    while( scanf("%s", num) )
    {
        if( num[0] == '~' ) break;
        bin.clear();

        while( num[0] ^ '#' )
        {
            len = strlen( num );

            if( len == 1 )  flag = 1;
            else if( len == 2 ) flag = 0;
            else
                for( j = 1; j <= len-2; ++j )
                    bin.push_back( flag );

            scanf("%s", num);
        }

        printf("%d\n", BIN_DEC());
    }

    return 0;
}
