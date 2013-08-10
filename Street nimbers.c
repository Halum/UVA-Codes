#include<stdio.h>
int main()
{
    printf("%10d%10d\n",6,8);
    printf("%10d%10d\n",35,49);
    printf("%10d%10d\n",204,288);
    printf("%10d%10d\n",1189,1681);
    printf("%10d%10d\n",6930,9800);
    printf("%10d%10d\n",40391,57121);
    printf("%10d%10d\n",235416,332928);
    printf("%10d%10d\n",1372105,1940449);
    printf("%10d%10d\n",7997214,11309768);
    printf("%10d%10d\n",46611179,65918161);
    // original code whitch takes much time
    /*
    register LL i,j,n,z;
    for(i=2,j=0; j<10;i++)
    {
        z = (i*i+i);
        n = z/2;
        n = sqrt(n);
        if(n*n*2==z) printf("%10lld %10d\n",n,i), j++;
    }
    */


    return 0;
}
