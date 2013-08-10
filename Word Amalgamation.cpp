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
int main()    //642
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    multimap < string, string > dic;
    multimap < string, string > :: iterator it;
    string scram, tmp;
    char def[] = "NOT A VALID WORD", str[] = "******";
    string found[101];

    while( cin >> scram && scram[0] != 'X' )
    {
        tmp = scram;
        sort( tmp.begin(), tmp.end() );

        dic.insert( pair< string, string >( tmp, scram ) );
    }


    while( cin >> scram && scram[0] != 'X' )
    {
        sort( scram.begin(), scram.end() );

        it = dic.find( scram );

        if( it == dic.end() )
            puts( def );
        else
        {
            i = 0;

            do
            {
                found[i++] = (*it).second;
            }while(  (++it) != dic.end() && (*it).first == scram );

            sort( found, found+i );

            for( j = 0; j < i; ++j )
                cout << found[j] << endl;

        }
        puts( str );
    }



    return 0;
}

