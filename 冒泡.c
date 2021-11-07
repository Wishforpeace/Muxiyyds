#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	int temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)
		{
			if(a[j]>a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
