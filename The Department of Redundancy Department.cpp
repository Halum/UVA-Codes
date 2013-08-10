#include<iostream>
#include<map>
#include<cstdio>
#include<vector>

using namespace std;

int main() //484
{
    map< int, int>list;
    vector<int>index;
    int count=0,now=0;
    vector<int>::iterator p;


    while(scanf("%d",&now)!=EOF){
        list[now]++;
        if( list[now] < 2 )
            index.push_back(now);
    }
    for( p = index.begin(); p!=index.end(); p++ )
        cout << *p << ' ' << list[*p] << endl;


    return 0;
}
