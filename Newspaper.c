#include<stdio.h>
int main()
{
    int t, k, i, j, y[100], n, m, sum;
    unsigned char x[100], ch;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        sum = 0;
        scanf("%d\n",&n);
        for(i=0; i<n; i++)
            scanf("%c%d\n",&x[i],&y[i]);

        scanf("%d\n",&m);

        for(j=0; ;)
        {
            if(j==m)
                break;
            scanf("%c",&ch);
            if(ch=='\n' || ch=='\r')
            {
                j++;
                continue;
            }
            for(i=0; i<n; i++)
            {
                if(x[i]==ch){
                    sum += y[i];
                    break;
                }
            }
        }
        printf("%.2lf$\n",(double)sum/100);
    }
    return 0;
}
