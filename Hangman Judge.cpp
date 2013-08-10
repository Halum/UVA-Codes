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
#define Z 100
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary, cunt;
char ch, dummy;
char sol[Z], ges[Z];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    while(scanf("%d%c",&N,&ch) && N>0)
    {
        printf("Round %d\n",N);
        gets(sol);
        gets(ges);
        cunt = x = y = 0;
        len = strlen(sol), pen = strlen(ges);
        for(i=0; i<pen; i++)
        {
            y=0;
            for(j=0; j<len; j++)
            {
                if(ges[i]==sol[j])
                {
                    sol[j] = '0';
                    x++, y=1;
                }
            }
            if(!y) cunt++;
            if(x==len)
            {
                printf("You win.\n");
                break;
            }
            if(cunt==7)
            {
                printf("You lose.\n");
                break;
            }
        }
        if(cunt!=7 && x!=len)
            printf("You chickened out.\n");
    }


    return 0;
}
