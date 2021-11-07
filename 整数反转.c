#include<stdio.h>
int main()
{
	long a[1000];
	int i;
	int x;
	scanf("%d",&x);
	int count;
	int t=x;
	int change=0;
	while(t!=0)
	{
		t/=10;
		count++;
	}
	for(i=0;i<count;i++)
	{
		a[i]=x%10;
		x/=10;
	}
	for(i=count-1;i>=0;i--)
	{	
		if(i=count-1)
		{
			change+=a[i];
		}
		else
		{	do
			{
				change=a[i]*10;
			}while(count-i--);
			break;
		}
	}
	printf("%d",change);
}
