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
#define sn scanf("\n")
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
    int colum[6], row[6], bingo[6][6];
    si(T);
    for(l=1; l<=T; l++)
    {
        for(i=1; i<=5; i++)
            for(j=1; j<=5; j++)
                if(i==3 && j==3) bingo[i][j]=0;
                else scanf("%d",&bingo[i][j]);

        memset(colum, 0, sizeof colum);
        memset(row, 0, sizeof row);
        colum[3]++, row[3]++, x=0;

        for(k=1; k<=75; k++)
        {
            scanf("%d",&N);
            if(x) continue;
            for(i=1; i<=5; i++)
                for(j=1; j<=5; j++)
                    if(N==bingo[i][j])
                    {
                        bingo[i][j]=0;
                        row[i]++, colum[j]++;
                        break;
                    }


                if(colum[1]==5 || colum[2]==5 || colum[3]==5 || colum[4]==5 || colum[5]==5){
                    printf("BINGO after %d numbers announced\n",k), x=1;}
                else if(row[1]==5 || row[2]==5 || row[3]==5 || row[4]==5 || row[5]==5){
                    printf("BINGO after %d numbers announced\n",k), x=1;}
                else if(bingo[1][1]==0 && bingo[2][2]==0 && bingo[3][3]==0 && bingo[4][4]==0 && bingo[5][5]==0)
                    printf("BINGO after %d numbers announced\n",k), x=1;
                else if(bingo[1][5]==0 && bingo[2][4]==0 && bingo[3][3]==0 && bingo[4][2]==0 && bingo[5][1]==0)
                    printf("BINGO after %d numbers announced\n",k), x=1;
            }

        }


        return 0;
    }

