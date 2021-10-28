#include <stdio.h>
int leap(int a)
{	int judge;//1为闰年，0为平年
	if(a%4!=0)
	{
		judge=0;	
	}else if(a%4==0)
	{
		if(a%100!=0||a%400==0)
		{
			judge=1;
		}else if(a%100==0&&a%400!=0) 
		{
			judge=0;
		}
	}
	return judge;
}

int main(void)
{	
	int judge;
	int year,month,day;
	int sum=0;
	int i=0;
	printf("请输入日期xxxx/xx/xx\n");
	scanf("%d/%d/%d",&year,&month,&day);
	judge=leap(year);
	if(judge=1)
	{	
		int days[]={31,29,31,30,31,30,31,31,31,30,31,30,31};
		for(int i=0;i<month-1;i++)
		{
			sum+=days[i];
		}
		sum+=day;
	}
	if(judge=0)
	{
		int days[]={31,28,31,30,31,30,31,31,31,30,31,30,31};
		 for(int i=0;i<month-1;i++)
          {
              sum+=days[i];
          }
              sum+=day;

	}
	printf("%d",sum);
	return 0;
}
