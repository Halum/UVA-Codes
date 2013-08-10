#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a, b, x=0, res, anss;
    char op, ans[4];
    for(; scanf("%d%c%d=%s",&a,&op,&b,ans)!=EOF; )
    {
        if(strcmp(ans,"?")==0)
            continue;
        if(op=='-')
            res=a-b;
        else
            res=a+b;
        anss = atoi(ans);
        if(res==anss) x++;
    }
    printf("%d\n",x);

    return 0;
}
