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
    int len=0, i, j, k=0, n, root;
    char str[10000], sqr[100], ch;
    scanf("%d\n",&n);
    while(scanf("%c",&ch))
    {
        if(k==n) break;

        if(isalpha(ch))
            str[len++] = ch;
        else if(ch=='\n')
        {
            str[len] = '\0';

            root = sqrt(len);
            printf("Case #%d:\n",k+1), k++;
            if(root*root!=len)
                printf("No magic :(\n"), len=0;
            else
            {
                for(i=len-1, j=0; j<root; i--,j++)
                    sqr[j] = str[i];
                sqr[j]='\0';
                if(strncmp(str,sqr,root)!=0)
                {
                    printf("No magic :(\n"), len=0;
                    continue;
                }
                else
                {
                    for(j=0, i=0; j<root; j++, i+=root)
                        sqr[j] = str[i];
                    sqr[j]='\0';
                    if(strncmp(str,sqr,root)!=0)
                    {
                        printf("No magic :(\n"), len=0;
                        continue;
                    }
                    else
                    {
                        for(j=0, i=len; j<root; j++, i-=root)
                            for(j=0, i=0; j<root; j++, i+=root)
                                sqr[j] = str[i];
                        sqr[j]='\0';
                        if(strncmp(str,sqr,root)!=0)
                        {
                            printf("No magic :(\n"), len=0;
                            continue;
                        }
                        else printf("%d\n",root), len=0;
                    }
                }
            }
        }
    }



    return 0;

}
