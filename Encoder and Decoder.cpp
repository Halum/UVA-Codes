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
    freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int i, j, k, len, b;
    char str[1000], a[5];

    while(gets(str)!=NULL)
    {
        len = strlen(str);
        if(isdigit(str[0]))
        {
            for(i=len-1; i>=0; )
            {
                a[0]=str[i], a[1]=str[i-1], a[2]='\0';
                b = atoi(a);
                if((b>=65 && b<=90)||(b>=97 && b<=122) || b==32 || b==33 || b==44 || b==46 || b==58 || b==59 || b==63)
                printf("%c",b), i-=2;
                else
                {
                    a[0]=str[i], a[1]=str[i-1], a[2]=str[i-2], a[3]='\0';
                    b=atoi(a);
                    printf("%c",b), i-=3;
                }
            }
            printf("\n");


        }
        else
        {
            for(i=len-1; i>=0; i--)
            {
                if(str[i]<100)
                    printf("%d%d",str[i]%10,str[i]/10%10);
                else printf("%d%d%d",str[i]%10,str[i]/10%10,str[i]/100%10);
            }
            printf("\n");
        }
    }

    return 0;

}

