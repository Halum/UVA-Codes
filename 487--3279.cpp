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
int num[ 500001 ];

char chek( char ch );
//---------------------------------------------------->
int main()    // 755
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)

    map< string, int >phn;
    map< string, int>::iterator it;
    char str[1000], ptr[10];
    string num;

    ptr[3] = '-';

    scanf("%d",&T);

    while( T-- )
    {
        phn.clear();
        scanf("\n%d\n", &N);

        while( N-- )
        {
            gets( str );
            i = j = 0;
            while( str[i] )
            {
                ptr[j] = chek( str[i] );
                if( ptr[j] != 1 ) j++;
                if( j == 3 ) j++;
                i++;
            }
            ptr[j] = 0;
            num = ptr;
            phn[num]++;
        }

        if( l ) pn;
        else l = 1;

        k = 0;
        for( it = phn.begin(); it != phn.end(); it++ )
            if( (*it).second > 1 )
            {
                cout << (*it).first << ' ' << (*it).second << endl;
                k = 1;
            }

        if( !k ) printf("No duplicates.\n");
    }


    return 0;
}

char chek( char ch )
{
    if( ch >= 'A' && ch <= 'C') return '2';
    else if( ch >= 'D' && ch <= 'F') return '3';
    else if( ch >= 'G' && ch <= 'I') return '4';
    else if( ch >= 'J' && ch <= 'L') return '5';
    else if( ch >= 'M' && ch <= 'O') return '6';
    else if( ch >= 'P' && ch <= 'S') return '7';
    else if( ch >= 'T' && ch <= 'V') return '8';
    else if( ch >= 'W' && ch <= 'Y') return '9';
    else if( isdigit(ch) ) return ch;
    else return 1;
}

