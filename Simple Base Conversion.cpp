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
    //freopen("b.txt","w",stdout);
    int a[15], sum, i, j, k;
    char num[15];
    while(gets(num))
    {
        if(num[0]=='-') break;
        if(num[1]!='x')
        {
            sum = atoi(num);
            for(i=0; ;)
            {
                a[i++] = sum%16;
                sum/=16;
                if(sum<16 && sum>0)
                {
                    a[i++]=sum; break;
                }
                else if(sum==0) break;
            }
            printf("0x");
            for(j=i-1; j>=0; j--)
            {
                if(a[j]>9) printf("%c",a[j]+55);
                else printf("%d",a[j]);
            }
            printf("\n");
        }
        else
        {
            for(i=2; i<strlen(num); i++)
                if(isalpha(num[i])) num[i] = num[i]- 7;

            sum = num[2]-48;

            for(i=2; i<strlen(num)-1; i++)
                sum = sum*16 + num[i+1]-48;

            printf("%d\n",sum);
        }
    }


    return 0;
}
