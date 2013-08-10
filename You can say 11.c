#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int j, len, mod, a;
    char x[1010], b[5];
    while(gets(x) )
    {
        if(x[0]=='0' && x[1]=='\0')
            return 0;
        mod = 0;
        len = strlen(x);
        for(j=0; j<len; j+=2)
        {
            if(j+1==len)
            {
                strncpy(b,&x[j],2);
                b[2]='\0';
                a=atoi(b)+mod*10;
                mod=a%17;
                continue;
            }
            else if(j+2==len)
            {
                strncpy(b,&x[j],3);
                b[2]='\0';
                a=atoi(b)+mod*100;
                mod=a%17;
                continue;
            }
            strncpy(b,&x[j],2);
            b[2]='\0';
            a=atoi(b)+mod;
            mod=a%17;
        }
        if(!mod)
            printf("1.\n",x);
        else printf("0.\n",x);
    }
    return 0;
}
