#include <stdio.h>

int main()
{
	int numb;
	int i=0;
	scanf("%d",&numb);
	int count[1000];
	for(int i=0;i<1000;i++)
	{
		count[i]=0;
	}
	int k=0;
		for( ;numb>0; )
		{	
			k=numb%10;
			count[k]++;
			numb=numb/10;
			
		}
		for(i=0;i<numb;i++)
		{
			if(count[i]!=0)
			{
				printf("%d %d\n",i,count[i]);
			}
		}
		return 0;
	
		
}
