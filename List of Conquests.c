#include<stdio.h>
#include<string.h>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d\n",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s\n",string)
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
int a[2005];
int main()
{
    register int i, j, k, l;
    char ch;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);;
    int n;
    char x[2005][80], nam[80];
    scanf("%d%c",&n,&ch);

    scanf("%s ",x[1]);
    a[1]++;
    gets(nam);

    for(j=2, i=2; j<=n; j++)
    {
        scanf("%s ",x[i]);
        gets(nam);

        for(k=1; k<i; k++)
        {
            if(strcmp(x[k],x[i])==0)
            {a[k]++;
            break;}
        }
        if(k==i) a[i++]++;
    }

    for(j=1; j<i-1; j++)
        for(k=1; k<=i-1-j; k++)
            if(strcmp(x[k],x[k+1])>0)
            {
                strcpy(nam,x[k]);
                strcpy(x[k],x[k+1]);
                strcpy(x[k+1],nam);
                a[k] = a[k]^a[k+1];
                a[k+1] = a[k]^a[k+1];
                a[k] = a[k]^a[k+1];
            }

    for(j=1; j<i; j++)
        printf("%s %d\n",x[j],a[j]);


    return 0;

}

