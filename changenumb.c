#include <stdio.h>
int main()
{
	int n;
	int i;
	int k;
	int numb[100];
	int count=0;
	int temp;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&numb[i]);
			}
			k=numb[0];

			for(i=0;i<n;i++)
			{
				if(k>numb[i])
				{
					k=numb[i];
					count=i;
				}
			}
		temp=numb[0];
		numb[0]=k;
		numb[count]=temp;	
		
		}
		for(i=0;i<n;i++)
		{	if(i!=n)
			{
			printf("%d ",numb[i]);
			}
			else
			{	
				printf("%d",numb[i]);
			}
		}
	}
}








