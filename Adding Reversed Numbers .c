#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    int i, k, t, len, chk, d, pen, f;
    char a[205], b[205], c[205];

    scanf("%d\n",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%s %s",a,b);
        chk=0;
        if(strlen(a)<strlen(b))
            len=strlen(a), pen=strlen(b), chk=2;
        else len=strlen(b), pen=strlen(a), chk=1;
        f=0;

        for(i=0; i<len; i++)
        {
            d=a[i]-48+b[i]-48+f;
            if(d>9)
                c[i]=d%10+48, f=1;
            else c[i]=d+48, f=0;
        }
        if(chk==2)
            for(i=i; i<pen; i++)
            {
                d=f+b[i]-48;
                if(d>9)
                    c[i]=d%10+48, f=1;
                else c[i]=d+48, f=0;
            }
        else
            for(i=i; i<pen; i++)
            {
                d=f+a[i]-48;
                if(d>9)
                    c[i]=d%10+48, f=1;
                else c[i]=d+48, f=0;
            }
        if(f==1)
            c[i]=1+48, i++;
        c[i]='\0';
        len = strlen(c);
        if(c[0]=='0')
            for(i=1; i<len; i++)
                if(c[i]!='0')
                {
                    strcpy(a,&c[i]);
                    strcpy(c,a);
                    break;
                }
        printf("%s\n",c);
    }

    return 0;

}


