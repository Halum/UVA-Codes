#include<cstdio>
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
#define eps 1e-7
#define SIZE 12
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dum;
bool check;
//---------------------------------------------------->
int GCD(int a, int b)
{
    if(a+b)
    {
        if(!b)
            return a;
        else
            return GCD(b, a%b);
    }
    else return 0;
}
char num[10000];
int halum[105];
//---------------------------------------------------->
int main()   //11827
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    cin>>T;
    sc(ch);
    while(T--)
    {
        gets(num);
        char *ptr;
        ptr = strtok(num, " ");
        i = 0;

        while(ptr != NULL)
        {
            halum[i++] = atoi(ptr);
            ptr = strtok(NULL, " ");
        }
        N = 1;
        for(j=0; j<i; j++)
            for(k=j+1; k<i; k++)
                if( GCD ( halum[j], halum[k] ) > N )
                    N = GCD ( halum[j], halum[k] );

        cout<<N<<endl;
    }

    return 0;
}
