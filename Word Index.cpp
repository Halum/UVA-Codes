#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;
int main() // 417
{
    //freopen("output.txt","w",stdout);
    map< string, int >word;
    int n,count=1;
    char i,j,k,l,m;
    string str;
    map< string, int >::iterator p;
    for(i='a' ; i<='z' ; i++)
    {
        str = i;
        word[str]=count++;
        //cout << str << endl;
    }

    for(i='a' ; i<='z' ; i++)
        for(j=i+1; j<='z'; j++)
        {
            str = i;
            str += j;
            //cout << str << endl;
            word[str]=count++;
        }
    for(i='a' ; i<='z' ; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
            {
                str = i;
                str += j;
                str += k;
                //cout << str << endl;
                word[str]=count++;
            }
    for(i='a' ; i<='z' ; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
                for(l=k+1; l<='z'; l++)
                {
                    str = i;
                    str += j;
                    str += k;
                    str += l;
                    //cout << str << endl;
                    word[str]=count++;
                }
    for(i='a' ; i<='z' ; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
                for(l=k+1; l<='z'; l++)
                    for(m=l+1; m<='z'; m++)
                    {
                        str = i;
                        str += j;
                        str += k;
                        str += l;
                        str += m;
                       // cout << str << endl;
                        word[str]=count++;
                    }

    while( cin >> str )
    {
        if( cin.eof() ) return 0;
        if( word[str] ) cout << word[str] << endl;
        else cout << 0 << endl;
    }


    return 0;
}
