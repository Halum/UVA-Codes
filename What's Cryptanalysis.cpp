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
    int i, j, k, n, a[26][3];
    char ch;
    for(i='a',j='A', k=0; k<26; i++,k++,j++)
    {
        a[k][0]=i;
        a[k][1]=j;
        a[k][2]=0;
    }

    scanf("%d\n",&n);

    for(i=1; i<=n; )
    {
        scanf("%c",&ch);

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            for(j=0; j<26; j++)
                if(ch==a[j][0] || ch==a[j][1])
                {
                    a[j][2]++;
                    break;
                }
        }
        else if(ch=='\n')
            i++;
    }

    for(j=0; j<25; j++)
        for(k=0; k<25-j; k++)
            if(a[k][2]<a[k+1][2])
            {
                a[k][2] = a[k][2]^a[k+1][2];
                a[k+1][2] = a[k][2]^a[k+1][2];
                a[k][2] = a[k][2]^a[k+1][2];
                a[k][1] = a[k][1]^a[k+1][1];
                a[k+1][1] = a[k][1]^a[k+1][1];
                a[k][1] = a[k][1]^a[k+1][1];

            }
            else if(a[k][2]==a[k+1][2] && a[k][2])
                if(a[k][1]>a[k+1][1])
                {
                    a[k][1] = a[k][1]^a[k+1][1];
                    a[k+1][1] = a[k][1]^a[k+1][1];
                    a[k][1] = a[k][1]^a[k+1][1];
                }

    for(j=0; j<26; j++)
        if(!a[j][2])
            break;
        else printf("%c %d\n",a[j][1],a[j][2]);



    return 0;

}
