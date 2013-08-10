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
#define Z 128
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen;
char ch, dummy;

int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    struct ascii
    {
        char ch;
        int freq;
    }halum[Z],y;
    char str[1010];
    int max;

    while(gets(str)!=NULL)
    {
        if(l) cout<<endl;
        else l=1;
        memset(halum, 0, sizeof halum);
        max=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>=32 && str[i]<=127){
            halum[str[i]].ch=str[i];
            halum[str[i]].freq++;}
        }
        for(i=0; i<Z-1; i++)
            for(j=0; j<Z-1-i; j++)
                if(halum[j].freq>halum[j+1].freq)
                {
                    y = halum[j];
                    halum[j] = halum[j+1];
                    halum[j+1] = y;
                }
                else if(halum[j].freq==halum[j+1].freq && halum[j].ch<halum[j+1].ch)
                {
                    y = halum[j];
                    halum[j] = halum[j+1];
                    halum[j+1] = y;
                }
        for(i=0; i<Z; i++)
            if(halum[i].freq) printf("%d %d\n",halum[i].ch,halum[i].freq);
    }

    return 0;
}
