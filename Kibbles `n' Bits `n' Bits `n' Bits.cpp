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
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int T,a,b;
    char num[20], given[6];
    char ans[16][6]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
    cin>>T;
    while(T--)
    {
        scanf("%s%c",given,&ch);
        num[0]='\0';

        for(i=0; given[i]; i++)
        {
            if(given[i]=='0') strcat(num,ans[0]);
            else if(given[i]=='1') strcat(num,ans[1]);
            else if(given[i]=='2') strcat(num,ans[2]);
            else if(given[i]=='3') strcat(num,ans[3]);
            else if(given[i]=='4') strcat(num,ans[4]);
            else if(given[i]=='5') strcat(num,ans[5]);
            else if(given[i]=='6') strcat(num,ans[6]);
            else if(given[i]=='7') strcat(num,ans[7]);
            else if(given[i]=='8') strcat(num,ans[8]);
            else if(given[i]=='9') strcat(num,ans[9]);
            else if(given[i]=='A') strcat(num,ans[10]);
            else if(given[i]=='B') strcat(num,ans[11]);
            else if(given[i]=='C') strcat(num,ans[12]);
            else if(given[i]=='D') strcat(num,ans[13]);
            else if(given[i]=='E') strcat(num,ans[14]);
            else if(given[i]=='F') strcat(num,ans[15]);
        }
        int len = strlen(num);
        for(i=len; i<13; i++)
            printf("0");
        printf("%s",num);
            len--;
        a=num[0]-48;
        for(i=0; i<len; i++)
            a = a*2 +num[i+1]-48;

        sc(ch);
        printf(" %c ",ch);
        scanf("%s",given);
        num[0]='\0';

        for(i=0; given[i]; i++)
        {
            if(given[i]=='0') strcat(num,ans[0]);
            else if(given[i]=='1') strcat(num,ans[1]);
            else if(given[i]=='2') strcat(num,ans[2]);
            else if(given[i]=='3') strcat(num,ans[3]);
            else if(given[i]=='4') strcat(num,ans[4]);
            else if(given[i]=='5') strcat(num,ans[5]);
            else if(given[i]=='6') strcat(num,ans[6]);
            else if(given[i]=='7') strcat(num,ans[7]);
            else if(given[i]=='8') strcat(num,ans[8]);
            else if(given[i]=='9') strcat(num,ans[9]);
            else if(given[i]=='A') strcat(num,ans[10]);
            else if(given[i]=='B') strcat(num,ans[11]);
            else if(given[i]=='C') strcat(num,ans[12]);
            else if(given[i]=='D') strcat(num,ans[13]);
            else if(given[i]=='E') strcat(num,ans[14]);
            else if(given[i]=='F') strcat(num,ans[15]);
        }
        len = strlen(num);
        for(i=len; i<13; i++)
            printf("0");
            len--;
        b=num[0]-48;
        for(i=0; i<len; i++)
            b = b*2 +num[i+1]-48;
        printf("%s = ",num);
        if(ch=='+') printf("%d\n",a+b);
        else printf("%d\n",a-b);
    }


    return 0;
}
