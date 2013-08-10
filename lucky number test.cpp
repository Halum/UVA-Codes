#include<cstdio>
#include<iostream>
#include<algorithm>
#define SIZE 215000

using namespace std;
//---------------------------------------------------->
int N;
//---------------------------------------------------->
bool flag[SIZE];
int luky[100335];
//---------------------------------------------------->
int main()    // 412
{
    register int i, j=1, k, l=0;
//---------------------------------------------------->
    j = 0;
    for( i = 3; i <= SIZE; i += 3 )
        if( !flag[i] )
        {
            flag[i] = true;
            luky[j++] = i;
        }

    for( i = 5; i <= SIZE; i += 5 )
        if( !flag[i] )
        {
            flag[i] = true;
            luky[j++] = i;
        }

    sort( luky, luky + j );

    while( cin >> N )
    {
        if( cin.eof() ) break;

        printf("%d\n", luky[N-1]);
    }


    return 0;
}

