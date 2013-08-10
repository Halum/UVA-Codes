#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d\n",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s\n",string)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;

using namespace std;
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
   int i, j, n, sum;

   printf("PERFECTION OUTPUT\n");

   while(si(n) && n)
   {
       if(n==1)
       {
           printf("%5d  DEFICIENT\n",1);
           continue;
       }
       for(sum=1, i=2, j=0; i<=n/2; i++)
            if(n%i==0)
                sum += i;


        printf("%5d  ",n);
       if(sum>n) printf("ABUNDANT\n");
       else if(sum<n) printf("DEFICIENT\n");
       else printf("PERFECT\n");
   }

   printf("END OF OUTPUT\n");

    return 0;

}
