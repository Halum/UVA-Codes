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
#define pn printf("\n")
#define sn scanf("\n")
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
#define tp top
#define pq priority_queue
#define pii pair< int, int >
#define loop(arraySize) for(int i=0; i<arraySize; ++i)
#define ms(array, value) memset(array, value, sizeof array)
#define CLEAR(q) while(q.size()) q.pop()
#define show(array, arraySize) for(int i=0; i<arraySize; ++i) cout << array[i] << ' '
#define dloop(arraySize_1, arraySize_2) for(int i=0; i<arraySize_1; ++i) for(int j=0; j<arraySize_1; ++j)
#define dshow(array, arraySize_1, arraySize_2) for(int i=0; i<arraySize_1; ++i){ for(int j=0; j<arraySize_2; ++j) cout << array[i][j] << ' '; cout << endl; }
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 10000000
#define INF (1<<20)
#define DEB if(1)
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int t, len, n, sum, x, y, e, w, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
bool visit[SIZE];
vector<int> prime;
int counter[SIZE];

bool isPrime(int val){
    if(val==2) return true;
    else if(val%2 == 0) return false;
    else if(!visit[val]) return true;
    else return false;
}

bool isDigPrime(int val){
    char str[100];
    sprintf(str, "%d", val);
    len = strlen(str);
    sum  = 0;
    loop(len) sum += str[i]-48;

    return isPrime(sum);
}

void genPrime(){
    int root = sqrt(SIZE);
    visit[2] = true;
    prime.pb(2);

    for(int i=3; i<=root; i+=2){
        if(!visit[i]){
            for(int j=i*i; j<=SIZE; j+=2*i){
                if(!visit[j]) visit[j] = true;
            }
        }
    }

    for(int i=3; i<=SIZE; i+=2)
        if(!visit[i] and isDigPrime(i)) prime.pb(i);
}

//---------------------------------------------------->
int main()    //10533
{
    register int i, j, k=1, l=0;
    #define DEB if(0)
    DEB freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    genPrime();

    counter[0] = counter[1] = 0;
    counter[2] = 1;

    for(i=3; i<=SIZE; ++i){
        if(isPrime(i) and isDigPrime(i)) counter[i] = counter[i-1] + 1;
        else counter[i] = counter[i-1];
    }

    sf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        pf("%d --- %d -- %d\n",counter[y], counter[x], counter[x-1]);
        pf("%d\n", counter[y]-counter[x-1]);
    }


    return 0;
}
