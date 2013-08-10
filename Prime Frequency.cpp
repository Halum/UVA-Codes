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
#define SIZE 2005
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
bool sieve[ SIZE ];
void GenPrime(long long int Z)
{
    /*  Its needed globally
    bool sieve[Z];*/
    register unsigned int i, j;
    sieve[0] = sieve[1] = 1;
    unsigned int root = sqrt( Z );
    for( i = 3; i <= root; i += 2 )
    {
        if( ! sieve[ i ] )
            for( j = i + i; j <= Z; j += i )
                if( ! sieve[ j ] ) sieve[ j ] = 1;
    }

}
struct freq{
    int count;
    char word;
}hav[62];

bool isprime( int yo )
{
    if( yo == 2 ) return true;
    if( yo % 2 == 0 ) return false;
    if( !sieve[ yo ] && yo > 1 ) return true;
    return false;
}
//---------------------------------------------------->
int main()    // 10789
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    GenPrime( SIZE );

    for( i = '0', j = 0; i <= '9'; i++, j++)
        hav[ j ].word = i;
        //cout<<j;
    for( i = 'A'; i <= 'Z'; i++, j++)
        hav[ j ].word = i;
        //cout<<j;
    for( i = 'a'; i <= 'z'; i++, j++)
        hav[ j ].word = i;
        //cout<<j;

    char word[ SIZE ];
    cin >> T;
    sc( ch );
    for( k = 1; k <= T; k++ )
    {
        gets( word );

        for( i = 0; word[ i ]; i++ )
        {
            if( isupper( word[ i ] ) ) hav[ word[i]-55 ].count++;
            else if( isdigit( word[ i ] ) ) hav[ word[i]-48 ].count++;
            else hav[ word[i]-61].count++;
        }
        printf("Case %d: ",k);

        for( j = sum = 0; j < 62; j++)
        {
            if( isprime( hav[j].count ) )
            {
                sum = 1;
                printf("%c", hav[j].word);
            }
            hav[j].count = 0;
        }
        if( !sum ) printf("empty");
        pn;
    }



    return 0;
}

