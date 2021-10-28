#include <stdio.h>
int main()
{
	int n;
	int i=0;
	int j=0;
	scanf("%d",&n);	
	long numb[n][100];
	
		for(i=0;i<n-1;i++)
		{
			scanf("%ld %ld %ld\n",&numb[i][0],&numb[i][1],&numb[i][2]);
			
		}
		for(i=0;i<n;i++)
		{
			if(numb[i][0]+numb[i][1]>numb[i][2])
			{
				printf("Case #%d:true\n",i+1);
			}else
			{
				printf("Case #%d:false\n",i+1);
			}
			
		}
	
	return 0;
}
