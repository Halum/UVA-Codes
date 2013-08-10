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
#define SIZE 1000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy, num1[SIZE], num2[SIZE], result[SIZE];
bool check;

int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int len1, len2;

    while(gets(num1))
    {
        gets(num2);

        len1 = strlen(num1),  len2 = strlen(num2);
        reverse(num1,num1+len1),  reverse(num2,num2+len2);   // reversing the numbers for easy calculating

        memset(result, 0, sizeof result);  // initiating result string to 0

        for(i=0; i<len2; i++)  // loop for number 2
        {
            cary = 0, k = i;
            for(j=0; j<len1; j++)  // loop for number 1
            {
                if(!result[k]) result[k]='0';

                x = (num2[i]-48)*(num1[j]-48)+cary+result[k]-48;  // num2 * num1 + cary + previous line
                cary = x/10;
                result[k++] = x%10+48;
            }
            if(cary) result[k++] = cary+48;
        }
        for(i=k-1; result[i]=='0' && i>-1; i--);

        result[i+1] = '\0';

        reverse(result,result+i+1);
        if(!result[0]) cout<<0<<endl;
        else
            cout<<result<<endl;
    }

    return 0;
}
