#include <stdio.h>
int main()
{
	int i;
	
	double sum=0;
	int n;
	scanf("%d",&n);
	int numb[110];
	for(int i=0;i<n;i++)
	{
		
		numb[i]=i+1;
		
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=1.0/numb[i];
		}
		if(i%2!=0)
		{
			sum+=(-1.0)/numb[i];
		}
	}
	printf("%.2lf",sum);
}
