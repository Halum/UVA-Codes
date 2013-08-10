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
#define Z 785
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
char fact[370][Z];
int freq[370];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int digit[10];

    fact[1][0]=fact[0][0]='1', fact[1][1]=fact[0][1]='\0', freq[1]=freq[0]= 1;
    for(k=2; k<=366; k++)
    {
        len = freq[k-1];
        for(i=0; i<len; i++)
        {
            x = ((fact[k-1][i]-48)*k+cary);
            fact[k][i] = x%10+48;
            cary = x/10;
        }
        if(cary)
        {
            len = log10(cary)+1;
            for(j=1; j<=len; j++)
            {
                fact[k][i++] = cary%10+48;
                cary /= 10;
            }
        }
        cary = 0;
        freq[k] = i;
    }

    while(scanf("%d",&N) && N)
    {
        cout<<N<<"! --\n";
        memset(digit, 0, sizeof digit);

        for(j=freq[N]-1; j>=0; j--)
        {
            switch(fact[N][j])
            {
                case '0': digit[0]++; break;
                case '1': digit[1]++; break;
                case '2': digit[2]++; break;
                case '3': digit[3]++; break;
                case '4': digit[4]++; break;
                case '5': digit[5]++; break;
                case '6': digit[6]++; break;
                case '7': digit[7]++; break;
                case '8': digit[8]++; break;
                case '9': digit[9]++; break;
            }
        }
        printf("   (0)%5d",digit[0]);
        for(i=1; i<5; i++)
            printf("    (%d)%5d",i,digit[i]);
        cout<<endl;
        printf("   (5)%5d",digit[5]);
        for(i++; i<10; i++)
            printf("    (%d)%5d",i,digit[i]);
        cout<<endl;
    }


    return 0;
}
