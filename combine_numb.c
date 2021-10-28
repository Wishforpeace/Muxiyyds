#include <stdio.h>
int main()
{
	int n;
	int numb[1000];
	int i=0;
	int j=0;
	int sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			scanf("%d",&numb[i]);
	}
		
	for(i=0;i<n;i++)
	{
		sum+=22*numb[i];
	}
	printf("%d",sum);
	
}
