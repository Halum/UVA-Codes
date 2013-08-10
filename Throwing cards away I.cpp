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
list < int > card;
list < int > :: iterator hav;
//---------------------------------------------------->
int main() //10935
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);

    while( cin >> N && N )
    {
        card.clear();
        for( i = 1 ; i <= N ; i++)
            card.push_back(i);

        printf("Discarded cards:");
        //sum = card.size();

        while( card.size() > 1){
            cout << ' ' << card.front();
            card.pop_front();
            card.push_back( card.front() );
            card.pop_front();
            if( card.size() > 1 ) cout<<',';
        }
        printf("\nRemaining card: ");
        cout<<card.front()<<endl;
    }


    return 0;
}
