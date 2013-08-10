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
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y,pen, cary;
char ch, dummy;
bool check;
////There's treasure everywhere 587
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    char dis[210];
    int len;
    double x,y,carry, res,N;
    carry = 1/sqrt(2);

    while(gets(dis) && strcmp(dis,"END"))
    {
        len = strlen(dis);
        x=y=0, l++;
        for(i=0; i<len; i++)
        {
            if(isdigit(dis[i])){
                N=0;
                for(i; isdigit(dis[i]);){
                    N*=10;
                    N+=dis[i++]-48;
                }
                i--;
            }
            else if(isupper(dis[i]) && isupper(dis[i+1])){
                N *= carry;
                if(dis[i]=='N'){
                    if(dis[i+1]=='E') x+=N, y+=N;
                    else x-=N, y+=N;
                    i++;
                }
                else{
                    i++;
                    if(dis[i]=='E') x+=N, y-=N;
                    else x-=N, y-=N;
                }

            }
            else if(isupper(dis[i])){
                if(dis[i]=='N') y+=N;
                else if(dis[i]=='E') x+=N;
                else if(dis[i]=='S') y-=N;
                else x-=N;
            }
            else if(dis[i]=='.'){
                printf("Map #%d\n",l);
                printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
                x*=x, y*=y;
                res = sqrt(x+y);
                printf("The distance to the treasure is %.3lf.\n\n",res);
            }
        }
    }


    return 0;
}
