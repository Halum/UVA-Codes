#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;

int main() //10282
{
    map< string, string > fis;
    string str, ptr;
    char now[1500], *p;

    while( gets(now) )
    {
       if( !now[0] ) break;
       p = strtok( now, " " );
       str = p;
       p = strtok(NULL, " ");
       ptr = p;
       fis[ptr] = str;
    }
    while( cin >> str )
    {
        if( cin.eof() ) return 0;
        if( fis[str].size() ) cout << fis[str] << endl;
        else cout << "eh\n";
    }
    return 0;

}
