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
#define SIZE 32768
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy;
bool check;
//---------------------------------------------------->
bool prime[SIZE];
void GenPrime(long long int Z)
{
    /*  Its needed globally
    bool prime[Z];*/

    register unsigned int i, j;
    unsigned int root=sqrt(Z);
    memset(prime, 1, sizeof prime);
    for(i=2; i<=root;)
    {
        if(prime[i])
            for(j=i+i; j<=Z; j+=i)
                if(prime[j]) prime[j]=0;


        for(i++; !prime[i]; i++);
    }
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);

    GenPrime(SIZE);

    while(scanf("%d",&N) && N)
    {
        for(i=2, sum=0; i<=N/2; i++)
            if(!prime[i] && !prime[N-i]) sum++;
        cout<<sum<<endl;

    }

    return 0;
}
