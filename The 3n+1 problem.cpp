#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, k, a, b, size, x, y;
    for(;scanf("%d%d",&a,&b)!=EOF;)
    {
        x=a, y=b;
        if(a>b)
            k = a, a = b, b = k;

        size = b-a+1;

        int cycle[size], numb[size];

        for(i=0, j=a; i<=size; i++, j++)
        {
            numb[i] = j;
            cycle[i] = 0;
        }

        for(i=0; i<size; i++)
        {
            for(j=0; ; j++)
            {
                if(numb[i]==1){
                    cycle[i]++;
                    break;}
                else if(numb[i]%2!=0){
                    numb[i]=3*numb[i]+1;
                    cycle[i]++;}
                else{
                    numb[i]/=2;
                    cycle[i]++;}
            }

        }
        sort(&cycle[0],&cycle[size]);

        printf("%d %d %d\n",x,y,cycle[size-1]);
    }

    return 0;
}
