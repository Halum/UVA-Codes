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
    register int i, j, k, l;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int a[54][1], max;

    fc(i,54) a[i][0]=0;


    while((ch=fgetc(stdin))!=EOF)
    {
        if(isupper(ch))
            a[ch-64][0]++;
        else if(islower(ch))
            a[ch-70][0]++;
        else if(ch=='\n')
        {
            max = 0;
            fi(i,52) if(a[i][0]>max) max=a[i][0];

            fi(i,52)
            {
                if(a[i][0]==max)
                {
                    if(i<=26) printf("%c",i+64);
                    else printf("%c",i+70);
                }
                a[i][0]=0;
            }
            printf(" %d\n",max);
        }
    }


    return 0;

}

