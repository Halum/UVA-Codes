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
    freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int len, i, k, sum;
    char s[50], p[10];
    while(gets(s)!=NULL)
    {
        if(s[0]=='_' && s[1]=='_')
            continue;
        len=strlen(s);
        for(i=0, k=0; i<len; i++)
            if(s[i]=='o')
                p[k++]='1';
            else if(s[i]==' ')
                p[k++]='0';
        sum = 0;
        for(i=0,k=7; i<8; i++,k--)
            sum += (p[i]-48)*pow(2,k);

        printf("%c",sum);
    }


    return 0;

}

