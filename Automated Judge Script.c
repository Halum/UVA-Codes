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
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int m, n, i=1, j,len1, len2;
    char x[125], num1[13000], num2[13000], str[13000], ptr[13000];
    while(gets(x)!=NULL)
    {
        n=atoi(x);
        if(n==0) break;
        for(j=0; j<n; j++)
        {
            gets(x);
            if(j==0)
                strcpy(str,x);
            else strcat(str,x);
        }
        gets(x);
        m=atoi(x);
        for(j=0; j<m; j++)
        {
            gets(x);
            if(j==0)
                strcpy(ptr,x);
            else strcat(ptr,x);
        }
        printf("Run #%d: ",i++);
        if(m==n && strcmp(str,ptr)==0)
            printf("Accepted\n");
        else
        {
            len1 = len2 = 0;
            for(j=0; str[j]!='\0'; j++)
                if(isdigit(str[j]))
                num1[len1++]=str[j];
            num1[len1]='\0';

            for(j=0; ptr[j]!='\0'; j++)
                if(isdigit(ptr[j]))
                num2[len2++]=ptr[j];
            num2[len2]='\0';

            if(strcmp(num1,num2)==0)
                printf("Presentation Error\n");
            else printf("Wrong Answer\n");
        }
    }


    return 0;

}
