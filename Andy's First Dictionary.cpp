#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<cstring>
#include<ctype.h>

using namespace std;

int main()
{
    char line[210], ch;
    string word;
    map <string, int >dic;
    map < string, int> :: iterator it;
    int i, l = 0;


    i = 0;
    while( ( ch = fgetc(stdin) ) !=EOF )
    {
        if( isalpha(ch) )
            line[i++] = tolower(ch);

        else
        {
            line[i] = 0;

            if ( i )
            {
                word = line;
                if( !dic[word] ) dic[word]++;
            }
            i = 0;
        }
    }

    for( it = dic.begin(); it != dic.end(); it++ )
        cout << (*it).first << endl;


    return 0;
}

