#include <stdio.h>
int main()
{
	int a,b;
	int i=0;
	scanf("%d %d",&a,&b);
	int temp=0;
	if(a<b)
	{
		temp=b;
	}
	else
	{
		temp=a;
	}
	for(i=temp;i>0;i++)
	{
		if(i%a==0&&i%b==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
