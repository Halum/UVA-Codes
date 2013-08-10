/*
ID: my.lost1
PROG: test
LANG: C++
*/
#include<cstdio>
#include<iostream>
#include<sstream>
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
#include<map>
//---------------------------------------------------->
#define sdum scanf("%c",&dummy)
#define pf printf
#define sf scanf
#define pv(value) cout<<value<<endl
#define pb push_back
#define ps push
#define pp pop
#define fr front
#define em empty
#define mp make_pair
#define sz size
#define fs first
#define sc second
#define cl clear
#define bg begin
#define en end
#define tp top
#define pq priority_queue
#define PII pair< int, int >
#define REP(variable, length) for(variable=0; variable<length; ++variable)
#define DREP(i, j, length) for(i=0; i<length; ++i) for(j=0; j<length; ++j)
#define MS(array, value) memset(array, value, sizeof array)
#define CLEAR(q) while(q.size()) q.pop()
#define SHOW(array, arraySize) for(int i=0; i<arraySize; ++i) cout << array[i] << ' '
#define DSHOW(array, arraySize_1, arraySize_2) for(int i=0; i<arraySize_1; ++i){ for(int j=0; j<arraySize_2; ++j) cout << array[i][j] << ' '; cout << endl; }
#define ifc(n) (visited[n>>6] & (1<<((n>>1)&31)))
#define isc(n) (visited[n>>6] |= (1<<((n>>1)&31)))
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 100
#define INF (1<<20)
//---------------------------------------------------->
template<class T> T GCD(T a, T b){if(!b)return a; return GCD(b,a%b);}
template<class T> T LCM(T a, T b){if(a+b)return (a/GCD(a,b)*b);}
template<class T> T Sqr(T a){return a*a;}
template<class T> T BigMod(T n, T p, T d)
    {if(!p) return 1; if(p%2) return ((n%d)*BigMod(n,p-1,d))%d;else return Sqr(BigMod(n,p/2,d))%d;}
//---------------------------------------------------->
bool isVowel(char str[], int n){if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u')return true;
     if(str[n]=='A'||str[n]=='E'||str[n]=='I'||str[n]=='O'||str[n]=='U')return true;return false;}
template<class T> void toStr(T n, char *s){sscanf(s,"%d",&n);}

//---------------------------------------------------->
typedef unsigned long long ULL;
typedef long long LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int t, len, n, sum, x, y, e, w, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->


//---------------------------------------------------->
int main()    //11774
{
    register int i, j, k=1, l=0;
    #define DEB if(0)
    DEB freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin>>t;

    REP(i,t){
        cin>>x>>y;
        pf("Case %d: ",i+1);
        pv((x+y)/GCD(x,y));
    }


    return 0;
}
