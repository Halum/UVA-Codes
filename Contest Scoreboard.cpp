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
#define eps 1e-12
#define SIZE 1002
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T=9,  len, N, sum, x, y, z, pen, cary, res;
char ch, dum;
bool check;
//---------------------------------------------------->
struct rank
    {
        char solved[10], submit, teamNo, totalSolved;
        int penalty[10];
        int totalPenalty;
    }rank[101];
//---------------------------------------------------->
int main()    // 10258
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout)
//---------------------------------------------------->

    char snap[100], *p;
    int team, prob, time, MAX;

    cin >> T;

    while( T-- )
    {
        sn;
        memset( rank, 0, sizeof rank );
        MAX = 0;

        while( gets(snap) )
        {
            if( !snap[0] ) break;
            i = 1;
            p = strtok( snap, " " );
            team = atoi( p );
            rank[team].submit = 1;
            rank[team].teamNo = team;
            if( team > MAX ) MAX = team;

            do
            {
                p = strtok( NULL, " " );

                if( i == 1 )
                    prob = atoi( p );

                else if( i == 2 )
                    time = atoi( p );

                else if( i == 3 )
                {
                    if( strcmp( p, "I") == 0 )
                        rank[team].penalty[prob] += 20;

                    else if( strcmp( p, "C") == 0 && !rank[team].solved[prob] )
                    {
                        rank[team].penalty[prob] += time;
                        rank[team].solved[prob] = 1;
                        rank[team].totalPenalty += rank[team].penalty[prob];
                        rank[team].totalSolved += 1;
                    }
                }
                i++;
            }while( p != NULL );
        }

        if( l ) cout << endl;
        else l = 1;

        for( i=1; i<=MAX; i++ )
            for( j=1; j<=MAX-i; j++ )
            {
                if( rank[j].totalSolved < rank[j+1].totalSolved )
                    swap( rank[j], rank[j+1] );

                else if( rank[j].totalSolved == rank[j+1].totalSolved )
                {
                    if( rank[j].totalPenalty > rank[j+1].totalPenalty )
                        swap( rank[j], rank[j+1] );

                    else if( rank[j].totalPenalty == rank[j+1].totalPenalty )
                    {
                        if( rank[j].teamNo > rank[j+1].teamNo )
                            swap( rank[j], rank[j+1] );
                    }
                }
            }

        for( i=1; i<=MAX; i++ )
            if( rank[i].submit )
            {
                if( rank[i].totalSolved )
                    printf("%d %d %d\n", rank[i].teamNo, rank[i].totalSolved, rank[i].totalPenalty );
                else
                    printf("%d 0 0\n", rank[i].teamNo );
            }
    }

    return 0;
}


