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
int T,  len, N, sum, x, y, pen, cary;
char ch, dummy;
bool check;
////
int main()
{
    register long long int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int n,p,q,dim[40];
    cin>>T;
    for(j=1; j<=T; j++)
    {
        cin>>n>>p>>q;
        printf("Case %d: ",j);
        for(i=0; i<n; i++)
            cin>>dim[i];

        for(i=sum=0; i<n && i<p;i++)
        {
            sum+=dim[i];
            if(sum>q) break;
        }
        cout<<i<<endl;
    }


    return 0;
}

