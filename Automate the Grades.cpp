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
#define SIZE 100
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary;
char ch, dummy;
bool check;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    cin>>T;
    for(j=1; j<=T; j++)
    {
        for(i=sum=0; i<4; i++){
            cin>>N;
            sum+=N;
        }
        printf("Case %d: ",j);
        int a[3];

        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);
        sum += (a[1]+a[2])/2;

        if(sum>=90) cout<<"A";
        else if(sum>=80) cout<<"B";
        else if(sum>=70) cout<<"C";
        else if(sum>=60) cout<<"D";
        else cout<<"F";

        pn;
    }


    return 0;
}
