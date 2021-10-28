#include <stdio.h>
int allsum(int a)
{
	int sum=0;
	int t=0;
	while(a)
	{
		t=a%10;
		sum+=t;
		a=a/10;
	}
	return sum;
}
int main(void)
{
	int N=0;//输入个数
	scanf("%d",&N);
	int m=0;
	int sum=0;
	int i;//用来遍历
	int friend[N];//收入输入数据
	int count[37]={};//存储朋友数,9999后为36
	

	
	for(int i=0;i<N;i++)
	{
		scanf("%d",&friend[i]);
		
		count[allsum(friend[i])]++;
	}

	int numb[1000]={};
	
	int ret=0;
	int k=0;
	for(int i=0;i<37;i++)
	{	if(count[i]>=1)
		{	
			
			numb[ret]=i;
			ret++;
			
		}
		
	
	}
	printf("%d\n",ret);
		for(int i=0;i<ret-1;i++)
		{
			printf("%d ",numb[i]);	
		}
			printf("%d",numb[ret-1]);

	

	return 0;
}


