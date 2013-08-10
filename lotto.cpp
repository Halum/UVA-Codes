#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main() //441
{
    int i1,i2,i3,i4,i5,i6,k,x[14],l=0;
    while(scanf("%d",&k) && k)
    {
        if(l) cout <<  endl;
        else l=1;
        for(i1=0;i1<k;i1++)
            scanf("%d",&x[i1]);
        sort(x,x+k);
        for(i1=0;i1<k-5;i1++)
            for(i2=i1+1;i2<k-4;i2++)
                for(i3=i2+1;i3<k-3;i3++)
                    for(i4=i3+1;i4<k-2;i4++)
                        for(i5=i4+1;i5<k-1;i5++)
                            for(i6=i5+1;i6<k;i6++)
                                printf("%d %d %d %d %d %d\n",x[i1],x[i2],x[i3],x[i4],x[i5],x[i6]);



    }



    return 0;
}
