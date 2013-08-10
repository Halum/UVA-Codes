#include<stdio.h>
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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define Z 110
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int mat[Z][Z];
    int rr,cr,R,C;

    while(scanf("%d",&N) && N)
    {
        rr=cr=R=C=sum=0;
        for(i=0; i<N; i++){
            for(j=0; j<N; j++)
                scanf("%d",&mat[i][j]), sum += mat[i][j];
            if(sum%2)
                sum=0, rr++, R=i+1;
        }
        sum = 0;
        for(j=0; j<N; j++){
            for(i=0; i<N; i++)
                sum += mat[i][j];
            if(sum%2)
                sum=0, C=j+1, cr++;
        }
        if(!rr && !cr) cout<<"OK\n";
        else if(rr==1 && cr==1)
            printf("Change bit (%d,%d)\n",R,C);
        else cout<<"Corrupt\n";
    }


    return 0;
}
