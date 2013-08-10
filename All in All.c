#include<stdio.h>
#include<string.h>
#define z 100000
int main()
{
    int i, j, k;
    char str[z], ptr[z], gtr[z];

    for(; scanf("%s%s",str,ptr)!=EOF; )
    {
        j=0, k=0;
        for(i=0; i<strlen(str); i++)
        {
            for( ; j<strlen(ptr); j++)
            {
                if(str[i]==ptr[j])
                {
                    gtr[k++] = ptr[j++];
                    break;
                }
            }
            if(j==strlen(ptr))
                break;
        }
        gtr[k] = '\0';
        if(strcmp(str,gtr)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
