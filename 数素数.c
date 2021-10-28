#include <stdio.h>
#include <math.h>
int judge(int numb)//判断素数
{	int i=2;
	for(i=2;i<numb;i++)//开方
	{
		if(numb%i==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main(void)
{	
	int numb[10000]={0};//初始化
	int i=0;
	int a=2;//输入
	while(1>0)
	{
		if(judge(a))
		{
			numb[i++]=a;
		}
		a++;
		if(a==10000)
		{
			break;
		}
	}
	int m=0;
	int n=0;
	int count=0;
	scanf("%d %d",&m,&n);
	int temp;
	for(int temp=m-1;temp<n;temp++)
	{
		count++;
		if(count%10==0)
		{	printf("%d",numb[temp]);
			printf("\n");
		}
		else 
		{
			printf("%d ",numb[temp]);
		}
	}
	
}

