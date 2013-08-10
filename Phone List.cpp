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
#define SIZE 10002
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
string phn[10000 + 10];
bool pre(string a, string b)
{
    if(b.size() < a.size()) return false;

    for(size_t i=0; i<a.size(); i++)
        if(a[i]!=b[i]) return false;

    return true;
}
//---------------------------------------------------->
int main()
{
    register int i=1, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout

    cin>>T;

    while(T--)
    {
        scanf("%d",&N);

        for(i=0; i<N; i++)
            cin>>phn[i];

        sort(phn, phn+N);

        check = true;

        for(i=0; i<N-1; i++)
            if(pre (phn[i], phn[i+1]))
            {
                check=false;
                break;
            }

        if ( check ) printf("YES\n");
        else printf ("NO\n");
    }


    return 0;
}
