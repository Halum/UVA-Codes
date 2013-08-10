#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define fi(i,len) for(i=1; i<=len; i++)
#define fc(i,len) for(i=0; i<len; i++)
#define si(a) scanf("%d",&a)
#define pi(a) printf("%d\n",a)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    ui a, b;
    while(scanf("%u%u",&a,&b)!=EOF)
        printf("%u\n",a^b);


    return 0;
}
