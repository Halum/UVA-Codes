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
#define Z 500000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
bool chk[60][60], lost;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char inst[110], dir;
    int H,L;
    scanf("%d%d",&H,&L);
    while(scanf("%d%d %c%c",&x,&y,&dir,&dummy)!=EOF)
    {
        gets(inst);
        for(i=lost=0; inst[i]!='\0'; i++)
        {
            if(inst[i]=='F' && !chk[x][y])
            {
                if(dir=='N') y++;
                else if(dir=='E') x++;
                else if(dir=='S') y--;
                else x--;
                if(x>H || y>L || x<0 || y<0)
                {
                    if(dir=='N') y--;
                    else if(dir=='E') x--;
                    else if(dir=='S') y++;
                    else x++;
                    chk[x][y]=lost=1;
                    break;
                }
            }
            else if(inst[i]=='F')
            {
                if(dir=='N' && y+1<=L) y++;
                else if(dir=='E' && x+1<=H) x++;
                else if(dir=='S' && y-1>=0) y--;
                else if(dir=='W' && x-1>=0) x--;
            }
            else if(inst[i]=='L')
            {
                if(dir=='N') dir='W';
                else if(dir=='E') dir='N';
                else if(dir=='S') dir='E';
                else dir='S';
            }
            else
            {
                if(dir=='N') dir='E';
                else if(dir=='E') dir='S';
                else if(dir=='S') dir='W';
                else dir='N';
            }
        }
        printf("%d %d",x,y);
        if(lost) printf(" %c LOST\n",dir);
        else printf(" %c\n",dir);
    }

    return 0;
}

