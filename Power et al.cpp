#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#define SIZE 1000
using namespace std;
long long int last[10], x, y, i, N;
// 10515
long long int Devide(char Number[], long long int Divisor)
{
    if(!Divisor) return false;

    long long int len=strlen(Number), cary=0, num;
    register int i;
    for(i=0; i<len; )
    {
        cary *= 10;
        num = Number[i++]-48 + cary;
        while(num<Divisor && i<len)
            if(num<Divisor && i<len) num = num*10 + Number[i++]-48;

        cary = num % Divisor;
    }
    if(!cary) return 0;
    return cary;
}

int main ( )
{
    char num[ SIZE ], pwr[ SIZE ];

    while ( scanf( "%s %s",num ,pwr ))
    {
        if ( num[0] == '0' && !num[1] && pwr[0] == '0' && !pwr[1] ) break;
        if ( !pwr[ 0 ] && !pwr[ 1 ] )
        {
            cout << 1 << endl;
            continue;
        }
        last[ 1 ] = num[ strlen ( num ) - 1 ] -48;
        x = last[ 1 ];
        for( i=2; ; i++ ){
            last[ i ] = ( last[ i-1 ] * x ) % 10;
            if( last[ 1 ] == last[ i ] )
                break;
        }
        N  = Devide( pwr , i-1 );
        if(!N) printf("%lld\n",last[i-1]);
        else printf("%lld\n",last[N]);
    }
}
