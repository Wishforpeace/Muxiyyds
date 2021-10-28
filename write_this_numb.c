#include<stdio.h>
int main()
{
	int numb;
	int i=0;
	int k=0;
	int count=0;
	int temp[100]={0};
	int sum=0;
	int index=1;
	scanf("%d",&numb);
	for(i=0;numb>0;i++)
	{
		temp[i]=numb%10;
		numb/=10;
		count++;
	}
	for(i=0;i<=count;i++)
	{
		sum+=temp[i];
	}

	while(sum!=0)
	{
		
		sum/=10;
		index++;
	}
	int py[index];
	for(i=0;sum>=0;i++)
	{
		py[i]=sum%10;
		sum=sum/10;
	}
	for(i=index-1;i>=0;i--)
	{

		switch(py[i])
		{
			case 1:
				printf("yi ");
				break;
			case 2:
				printf("er ");
				break;
			case 3:
				printf("san ");
				break;
			case 4:
				printf("si ");
				break;
			case 5:
				printf("wu ");
				break;
			case 6:
				printf("liu ");
				break;
			case 7:
				printf("qi ");
				break;
			case 8:
				printf("ba ");
				break;
			case 9:
				printf("jiu ");
				break;
			case 0:
				printf("ling ");
		 		break;
		}
	
	}
	printf("\b");

}
