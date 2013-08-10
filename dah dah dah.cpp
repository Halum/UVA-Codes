#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define fi(counter,length) for(counter=1; counter<=length; counter++)
#define fc(counter,length) for(counter=0; counter<length; counter++)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn(int) scanf("%d\n",&int)
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define size 20
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
using namespace std;
int T, N, len, sum, x, y, r, c;
char ch;

int main()
{
    register int i, j, k, l;
    //freopen("a.txt","r",stdin);
    //freopen("b.txt","w",stdout);
    char msg[2005], *p, chk[10];
    char morse[53][10]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-",".-.-.","-....-","..--.-",".-..-.",".--.-."};
    char symbol[54] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?\'!/()&:;=+-_\"@";
    scanf("%d\n",&N);

    fi(k,N)
    {
        gets(msg);
        printf("Message #%d\n",k);
        len = strlen(msg);

        for(i=j=0; i<=len; i++)
        {
            if(msg[i]==' ')
            {
                chk[j]='\0';
                j=0;
                for(l=0; l<53; l++)
                {
                    if(strcmp(morse[l],chk)==0)
                    {
                        printf("%c",symbol[l]);
                        break;
                    }
                }
                if(i+1!=len && msg[i+1]==' ')
                {
                    printf(" ");
                    i++;
                }
            }
            else if(msg[i]=='\0')
            {
                chk[j]='\0';
                for(l=0; l<53; l++)
                {
                    if(strcmp(morse[l],chk)==0)
                    {
                        printf("%c",symbol[l]);
                        break;
                    }
                }
                j=0;
                printf("\n");
            }
            else
            {
                chk[j++] = msg[i];
            }
        }
        if(k<N) printf("\n");
    }

    return 0;
}

