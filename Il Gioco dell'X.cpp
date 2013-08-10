#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn(int) scanf("%d\n",&int)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define size 200
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int T, N, len, sum;
char ch;
void chk(char board[][size], int i, int j, int N)
{

    if(i<0 || j<0 || i==N || j==N) return;
    else if(board[i][j]=='w' && j==N-1)
    {
        sum = 1;
        return;
    }
    else if(board[i][j]=='w')
    {
        board[i][j] = 'r';
        chk(board, i, j+1, N);
        chk(board, i, j-1, N);
        chk(board, i+1, j, N);
        chk(board, i-1, j, N);
        chk(board, i+1, j+1, N);
        chk(board, i-1, j-1, N);
    }
    else return;

}

int main()
{
    register int i, j, k=1, l;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char board[size][size];

    while(scanf("%d%c",&N,&ch) && N)
    {

        for(i=0; i<N; i++)
            gets(board[i]);

        sum = 0;

        for(i=0; i<N; i++)
        {
            if(board[i][0]=='w')
                chk(board, i, 0, N);
            if(sum) break;
        }
        if(sum) printf("%d W\n",k++);
        else printf("%d B\n",k++);
    }

    return 0;
}

