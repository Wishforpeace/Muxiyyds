#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,t,a[100];
	while(scanf("%d",&n)!=EOF)//多次输入 ctrl+z enter 可结束
	{
	if(n==0)
	break;
	for(i=0;i<n;i++)//将输入的n个整数存入数组
	{
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>0;j--)//冒泡法排序
	{
		for(i=j-1;i>0;i--)
		{
		if(fabs(a[j])>fabs(a[i]))//调用绝对值函数	
		{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
		}
	
	}
	}
	for(i=0;i<n;i++)//把排序后的数组输出
	{
		if(i!=n)
		printf("%d",a[i]);
		else
			printf("%d\n",a[i]);
	}
		
	}

	return 0;
}
