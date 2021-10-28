#include <stdio.h>
int main()
{
	int n;
	char a;
	int i;
	int j;
	scanf("%d %c",&n,&a);
	for(i=n/2;i>0;i--)
	{	
		if(i==1||i==n/2)
		{
		for(j=n;j>0;j--)
		{
			printf("%c",a);
			if(j==1)
			{
				printf("\n");
			}
		}
		}
		else if(i!=1&&i!=n/2)
		{
			for(j=n;j>0;j--)
			{	
				if(j==n)
				{
					printf("%c",a);
				}
				else if(j==1)
				{
					printf("%c",a);
					printf("\n");
				}
				else
				{
					printf(" ");
				}
				
				

			}
		}


	}
	return 0;
}
