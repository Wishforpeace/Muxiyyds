#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	while(n>1)
	{
		if(n%2==0)
		{
			count++;
			n/=2;
			continue;
		}else{
			count++;
			n=(3*n+1)/2;
			continue;
		}
		
		
		
	}
	printf("%d",count);
	return 0;

}
