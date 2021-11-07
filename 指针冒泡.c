#include<stdio.h>
int main()
{
	int n=5;
	int i,t,j;
	int p[5]={2,51,61,6,15};
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	return 0;
}
