#include<stdio.h>
#define M 10001

char num[M];
int main()
{
    register int s,c,i,n;
    //freopen("in.txt","r",stdin);

    while(gets(num))
    {
        s = 0;c = 1;

        for(i=0;num[i];i++)
            s = s + (num[i]&15);//s=s+num[i]-48
        if(!s)break;

        if(s%9)
        {
            printf("%s is not a multiple of 9.\n",num);
            continue;
        }

        while(s^9)
        {
            n = s;s = 0;
            while(n)
            {
                s += n%10;
                n /= 10;
            }
            c++;
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n",num,c);
    }
    return 0;
}
