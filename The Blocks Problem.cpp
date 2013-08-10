#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;
int stak[25][25];
int main()
{
    int i, j, k, N, a,b;
    char word[10], ai, aj, bi, bj;

    for( i=0; i<25; i++ )
    {
        stak[i][0] =i;
        for( j=1; j<25; j++)
            stak[i][j] = -1;
    }
    scanf("%d",&N);

    while( scanf("%s",word) )
    {
        if(strcmp(word,"quit")==0 ) break;

        if( strcmp(word,"move")==0 )
        {
            scanf("%d%s%d",&a,word,&b);
            ai=aj=bi=bj=-1;
                for( i=0; i<N; i++)
                {
                    for( j=0; stak[i][j]>-1; j++)
                    {
                        if(stak[i][j]==a) ai=i, aj=j;
                        if(stak[i][j]==b) bi=i, bj=j;
                    }
                    if(ai>=0 && bi>=0) break;
                }
                if( ai==bi) continue;

            if(strcmp(word,"onto")==0) // move onto
            {
                for(i=aj+1; stak[ai][i]>-1; i++)
                {
                    for( j=0; stak[stak[ai][i]][j]>-1; j++);
                    stak[stak[ai][i]][j] = stak[ai][i];
                    stak[ai][i] = -1;
                }
                for(i=bj+1; stak[bi][i]>-1; i++)
                {
                    for( j=0; stak[stak[bi][i]][j]>-1; j++);
                    stak[stak[bi][i]][j] = stak[bi][i];
                    stak[bi][i] = -1;
                }
                stak[bi][bj+1] = a;
                stak[ai][aj] = -1;
            }
            else // move over
            {
                for(i=aj+1; stak[ai][i]>-1; i++)
                {
                    for( j=0; stak[stak[ai][i]][j]>-1; j++);
                    stak[stak[ai][i]][j] = stak[ai][i];
                    stak[ai][i] = -1;
                }
                for( i=bj+1; stak[bi][i]>-1; i++);
                stak[bi][i] = a;
                stak[ai][aj] = -1;
            }
        }
        else
        {
            scanf("%d%s%d",&a,word,&b);
              ai=aj=bi=bj=-1;
                for( i=0; i<N; i++)
                {
                    for( j=0; stak[i][j]>-1; j++)
                    {
                        if(stak[i][j]==a) ai=i, aj=j;
                        if(stak[i][j]==b) bi=i, bj=j;
                    }
                    if(ai>=0 && bi>=0) break;
                }
                if( ai==bi) continue;
            if(strcmp(word,"onto")==0) // pile onto
            {

                for(i=bj+1; stak[bi][i]>-1; i++)
                {
                    for( j=0; stak[stak[bi][i]][j]>-1; j++);
                    stak[stak[bi][i]][j] = stak[bi][i];
                    stak[bi][i] = -1;
                }
                for(i=aj; stak[ai][i]>-1; i++)
                {
                    stak[bi][++bj]= stak[ai][i];
                    stak[ai][i]=-1;
                }
            }
            else // pile over
            {
                for(i=bj+1;stak[bi][i]>-1;i++);
                for(j=aj;stak[ai][j]>-1;j++)
                {
                    stak[bi][i++]=stak[ai][j];
                    stak[ai][j]=-1;
                }

            }
        }
    }
    for(i=0; i<N; i++)
    {
        printf("%d:",i);
        for(j=0; stak[i][j]>-1; j++)
            printf(" %d",stak[i][j]);
        cout << endl;
    }

    return 0;
}
