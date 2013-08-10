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
    int i=0, j, k;
    char str[10000], ch, ptr[10000];

    while(scanf("%c",&ch))
    {
        if(isupper(ch))
            str[i++] = tolower(ch);
        else if(isalpha(ch))
            str[i++] = ch;
        else if(ch=='\n')
        {
            str[i] = '\0';

            if(strcmp(str,"done")==0)
                return 0;

            for(j=i-1, k=0; j>=0; j--, k++)
                ptr[k] = str[j];
            ptr[k] = '\0';

            i=0;
            if(strcmp(str,ptr)==0)
                printf("You won't be eaten!\n");
            else printf("Uh oh..\n");
        }
    }

    return 0;

}

