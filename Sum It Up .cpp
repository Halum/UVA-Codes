/*
ID: my.lost1
PROG: test
LANG: C++
*/
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
#define sn scanf("\n")
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 35
#define INF 99999999
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int a[15];
map<string, bool> keep;

template <class T> bool comp(T a, T b)
{
    return a > b;
}

void intToStr( int n, char *num )
{
    sprintf( num, "%d", n );
}

void doSum(int sum, int pos, vector<int> v)
{
    if(sum == T){
        sort(v.begin(), v.end(), comp<int>);
        char s[100];
        string str = "";
        intToStr(v[0], s);
        str += s;

        for(int i=1; i<v.size(); ++i){
            intToStr(v[i], s);
            str = str + "+" + s;
        }
        if(!keep[str]){
            cout << str << endl;
            keep[str] = true;
        }

        check = true;
    }
    else if(pos < N){
        char x = false;
        if(sum+a[pos] <= T){
            x = true;
            v.push_back(a[pos]);
            doSum(sum+a[pos], pos+1, v);
        }
        if(x) v.pop_back();
        doSum(sum, pos+1, v);
    }
}
//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    vector<int> v, num;

    while(cin >> T >> N and N){
        for(i=0; i<N; ++i) cin >> a[i];
        sort(a, a+N, comp<int>);
        check = false;
        keep.clear();

        printf("Sums of %d:\n",T);
        doSum(0, 0, v);
        if(!check) puts("NONE");
    }




    return 0;
}
