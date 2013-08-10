
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn(int) scanf("%d\n",&int)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define size 20
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int T, N, len, sum;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int factor[25];
    int prime[26];
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11;
    prime[5] = 13;
    prime[6] = 17;
    prime[7] = 19;
    prime[8] = 23;
    prime[9] = 29;
    prime[10] = 31;
    prime[11] = 37;
    prime[12] = 41;
    prime[13] = 43;
    prime[14] = 47;
    prime[15] = 53;
    prime[16] = 59;
    prime[17] = 61;
    prime[18] = 67;
    prime[19] = 71;
    prime[20] = 73;
    prime[21] = 79;
    prime[22] = 83;
    prime[23] = 89;
    prime[24] = 97;
    prime[25] = 101;

    while(scanf("%d",&N) && N)
    {
        memset(factor, 0, sizeof(factor));

        for(i=2; i<=N; i++)
        {
            sum = i;
            for(j=0; j<26; j++)
            {
                if(!sum || sum==1) break;
                if(sum%prime[j]==0)
                {
                    factor[j]++;
                    sum/=prime[j];
                    j=-1;
                }

            }
        }
        printf("%3d! =",N);

        if(N<prime[15])
        {
            for(i=0; prime[i]<=N; i++)
                printf("%3d",factor[i]);
            pn;
        }
        else
        {
            for(i=0; i<15; i++)
                printf("%3d",factor[i]);
            pn;
            printf("%9d",factor[i++]);
            for(j=i; prime[j]<=N; j++)
                printf("%3d",factor[j]);
            pn;
        }
    }


    return 0;
}

