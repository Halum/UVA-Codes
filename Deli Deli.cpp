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
int T, len, N, sum, x, y, cary, ans, counter, temp, MAX, MIN;
char ch, dum;
bool check;
//---------------------------------------------------->
bool Vowel( char str[], int n )
{
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u')
        return true;
    return false;
}

bool rule3( char str[], int i )
{
    --i;
    if( str[i] == 'o' || str[i] == 'x' || str[i] == 's' ) return true;
    else if( (str[i-1] == 'c' && str[i] == 'h') || (str[i-1] == 's' && str[i] == 'h') ) return true;
    else return false;
}
//---------------------------------------------------->
int main()    // 11233
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    /*char str[50];
    while( gets(str) != NULL )
        puts(str);*/
    char word[101][21], str[21];
    map< string, string >hav;
    string a, b;

    cin >> len >> N;
    sn;

    for( i=0; i<len; i++ )
    {
        cin >> a >> b;
        hav[a] = b;
    }
    sn;

    for( i=0; i< N; ++i )
    {
        gets( word[i] );
        a = word[i];
        check = 0;

        strcpy( str, hav[a].c_str() );

        if( str[0] )
        {
            check = 1;
            strcpy( word[i], str );
        }
        else if( !check )
        {
            len = strlen( word[i] );

            if( !Vowel( word[i], len-2 ) && word[i][len-1] == 'y' )
                strcpy( &word[i][len-1], "ies" );
            else if( rule3( word[i], len ) )
                strcat( word[i], "es" );
            else strcat( word[i], "s" );
        }

        puts( word[i] );
    }

    return 0;
}
