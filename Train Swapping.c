#include<stdio.h>
int main()
{
	int i, j, k, T, N, res, swp, a[60];
	scanf("%d",&T);
	for(k=1; k<=T; k++)
	{
		res = 0;
		scanf("%d",&N);
		
		for(j=0; j<N; j++)
			scanf("%d",&a[j]);
		
		for(i=0; i<N-1; i++)
			for(j=0; j<N-1-i; j++)
			{
				if(a[j]>a[j+1])
				{
					swp = a[j];
					a[j] = a[j+1];
					a[j+1] = swp;
					res++;
				}
			}
			
		printf("Optimal train swapping takes %d swaps.\n",res);
		
		
	}
			
		return 0;
		
}
