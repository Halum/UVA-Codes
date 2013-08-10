#include<stdio.h>
int main()
{
	int t, i, j, k, b[1000];
	char a[1000][15], ch;
	scanf("%d",&t);
	for(i=1; i<=t; i++)
	{
		scanf("\n\n");
		for(j=0; scanf("%d%c",&b[j],&ch) ;)
		{
			j++;
			if(ch=='\n')
				break;	
		}
		
		for(k=0; k<j; k++)
			scanf("%s",a[b[k]-1]);
		
		for(k=0; k<j; k++)
			printf("%s\n",a[k]);
		
		if(i<t)
			printf("\n");
	}
	
	return 0;
}
