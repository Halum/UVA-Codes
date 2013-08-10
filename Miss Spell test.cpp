#include<cstdio>
#include<iostream>
#include<algorithm>
#define SIZE 215000

using namespace std;
//---------------------------------------------------->
int N, M;
char word[100];
//---------------------------------------------------->
void remove( char *w, int n )
{
    int i;

    for( i = n-1; w[i+1]; ++i )
        w[i] = w[i+1];

    w[i] = 0;
}


//---------------------------------------------------->
int main()    // 412
{
    register int i, j=1, k, l=0;
//---------------------------------------------------->
    scanf("%d", &N);

    for( i = 1; i <= N; ++i )
    {
        scanf("%d %s", &M, word);

        printf("%d ", i);

        remove( word, M );

        printf("%s\n", word);
    }



    return 0;
}

