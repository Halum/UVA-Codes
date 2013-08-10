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
#define eps 1e-12
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 10978
{
    register int i, j=0, k, l=1;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
    char ans[55][30], wrd[30], val[25];

    while( cin >> N && N )
    {
        scanf("\n");
        memset( ans[0], 0, sizeof ans );
        i = 1;

        x = N;

        while( x-- )
        {
            scanf("%s %s",val,wrd);

            len = strlen(wrd);

            for( j = 1; ; i++,j++)
            {
                if(i > N ) i = 1;
                if( ans[i][0] ) j--;

                if( j == len )
                {
                    strcpy(ans[i++],val);
                    break;
                }
            }
        }

        cout << ans[1];
        for( i = 2; i<=N; i++ )
            printf(" %s",ans[i]);
        cout << endl;

    }





    return 0;
}
