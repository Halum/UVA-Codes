#include<iostream>
#include<cstdio>
#define sc(ch) ch=fgetc(stdin)
struct cycle{
    char red, yellow, orange, green, blue;
} x[100];

using namespace std;
int main() //154
{
    int i, j, line, min, l=0, m;
    char ch, str[100];
    while( ch = fgetc(stdin) )
    {
        if(ch=='#')
        {
            gets( str ); break;
        }

        do
        {
            if( ch == 'e' ){
            gets( str ); break;
            }
            else if( ch == '\n' ) l++;

            if( ch == 'r' )
            {
                sc(ch);
                sc(x[l].red);
            }
            else if( ch == 'y' )
            {
                sc(ch);
                sc(x[l].yellow);
            }
            else if( ch == 'o' )
            {
                sc(ch);
                sc(x[l].orange);
            }
            else if( ch == 'g' )
            {
                sc(ch);
                sc(x[l].green);
            }
            else if( ch == 'b' )
            {
                sc(ch);
                sc(x[l].blue);
            }
        } while( sc(ch));

        int min = 21400000, line = 1;

        for( i=0; i<l; i++ ){
            int count=0;
            for( j=0; j<l; j++ )
            {
                if(i==j) continue;
                if( x[i].red!= x[j].red ) count++;
                if( x[i].blue!= x[j].blue ) count++;
                if( x[i].yellow!= x[j].yellow ) count++;
                if( x[i].green!= x[j].green ) count++;
                if( x[i].orange!= x[j].orange ) count++;

            }
            if( count < min ) min = count, line = i;
        }
        cout << line + 1 << endl;
        l = 0;
    }


    return 0;
}
