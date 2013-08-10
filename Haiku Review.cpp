#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
bool Vowel(char str[], int n)
{
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'||str[n]=='y')
        return true;
    else
        return false;
}
int main()
{
    char haiku[300];
    int syl1,syl2,syl3,i,j,k;
    while(gets(haiku))
    {
        if(strcmp(haiku, "e/o/i")==0) return 0;

        syl1=syl2=syl3=0;
        for(j=0; haiku[j]!='/'; j++)
        {
            if(Vowel(haiku, j)&& !Vowel(haiku, j-1)) syl1++;
        }
        if(syl1!=5) printf("1\n",syl1);
        else
        {
            for(++j; haiku[j]!='/'; j++)
            {
                if(Vowel(haiku, j)&& !Vowel(haiku, j-1)) syl2++;
            }
            if(syl2!=7)printf("2\n");
            else
            {
                for(++j; haiku[j]; j++)
                {
                    if(Vowel(haiku, j)&& !Vowel(haiku, j-1)) syl3++;
                }
                if(syl3!=5)printf("3\n");
                else printf("Y\n");
            }
        }
    }
    return 0;
}
