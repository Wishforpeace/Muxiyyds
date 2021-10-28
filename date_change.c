#include <stdio.h>
int main()
{
	int n;
	int min;
	int temp;
	int i;
	int t;	
	int numb[n];
	int key;
	while(scanf("%d",&n)!=EOF)
{
		if(n=0)
		{
			break;
		}
		else
		{
			
			for(int i=0;i<n;i++)

			{	
				
				scanf("%d",&numb[i]);

			}
			int min;
			min=numb[0];
			for(int i=0;i<n;i++)
			{

				if(numb[i]<=min)
				{
					min=numb[i];
					key=i;		
				}
			}
			t=numb[0];
			numb[1]=min;
			numb[key]=t;
			
		}
		for(int i=0;i<n;i++)
		{
			printf("%d",numb[i]);
		}
	}
	return 0;
}
