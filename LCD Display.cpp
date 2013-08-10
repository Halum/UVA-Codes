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
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int s, n, len;
    char x[110];
    while(scanf("%d %s",&s,x))
    {
        if(s==0 && atoi(x)==0) break;

        len = strlen(x);
        for(j=0; j<len; j++)
        {
            if(x[j]=='1' || x[j]=='4')
            {
                fi(i,s+1) printf(" ");
                if(j<len-1) printf("  ");
                else printf(" ");
            }
            else if(!isdigit(x[j]))
            {
                fi(i,s+2) printf(" ");
                if(j<len-1) printf(" ");
            }
            else
            {
                printf(" ");
                fi(i,s) printf("-");
                if(j<len-1) printf("  ");
                else printf(" ");
            }
        }
        printf("\n");
        fi(k,s)
        {
            fc(j,len)
            {
                if(x[j]=='0' || x[j]=='8' || x[j]=='9' || x[j]=='4')
                {
                    printf("|");
                    fi(i,s) printf(" ");
                    printf("|");
                    if(j<len-1) printf(" ");
                }
                else if(x[j]=='1' || x[j]=='2' || x[j]=='3' || x[j]=='7')
                {
                    fi(i,s+1) printf(" ");
                    printf("|");
                    if(j<len-1) printf(" ");
                }
                else if(!isdigit(x[j]))
                {
                    fi(i,s+2) printf(" ");
                    if(j<len-1) printf(" ");
                }
                else
                {
                    printf("|");
                    fi(i,s+1) printf(" ");
                    if(j<len-1) printf(" ");
                }
            }
            printf("\n");
        }

        fc(j,len)
        {
            if(x[j]=='1' || x[j]=='7' || x[j]=='0')
            {
                fi(i,s+2) printf(" ");
                if(j<len-1) printf(" ");
            }
            else if(!isdigit(x[j]))
            {
                fi(i,s+2) printf(" ");
                if(j<len-1) printf(" ");
            }
            else
            {
                printf(" ");
                fi(i,s) printf("-");
                if(j<len-1) printf("  ");
                else printf(" ");
            }
        }
        printf("\n");
        fi(k,s)
        {
            fc(j,len)
            {
                if(x[j]=='0' || x[j]=='8' || x[j]=='6')
                {
                    printf("|");
                    fi(i,s) printf(" ");
                    printf("|");
                    if(j<len-1) printf(" ");
                }
                else if(x[j]=='1' || x[j]=='3' || x[j]=='4' || x[j]=='5' || x[j]=='7' || x[j]=='9')
                {
                    fi(i,s+1) printf(" ");
                    printf("|");
                    if(j<len-1) printf(" ");
                }
                else if(!isdigit(x[j]))
                {
                    fi(i,s+2) printf(" ");
                    if(j<len-1) printf(" ");
                }
                else
                {
                    printf("|");
                    fi(i,s+1) printf(" ");
                    if(j<len-1) printf(" ");
                }
            }
            printf("\n");
        }
        for(j=0; j<len; j++)
        {
            if(x[j]=='1' || x[j]=='4' || x[j]=='7')
            {
                fi(i,s+1) printf(" ");
                if(j<len-1) printf("  ");
                else printf(" ");
            }
            else if(!isdigit(x[j]))
            {
                fi(i,s+2) printf(" ");
                if(j<len-1) printf(" ");
            }
            else
            {
                printf(" ");
                fi(i,s) printf("-");
                if(j<len-1) printf("  ");
                else printf(" ");
            }
        }
        printf("\n\n");
    }

    return 0;

}

