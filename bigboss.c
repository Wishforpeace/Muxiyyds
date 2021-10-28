#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,m;
	int i=0;
	int j=0;
	int numb[100000];
	int t,p;
	while(scanf("%d %d",&n,&m)&&!(n==0&&m==0))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&numb[i]);
		}
	}
		if(n>m)
		{	
			
			for(i=n;i>0;i--)
			{
				for(j=i-1;j>0;j--)
				{
					if(numb[i]>numb[j])
					{
						t=numb[j];
						numb[j]=numb[i];
						numb[i]=t;
					}
				}
			}
			printf("%d",numb[0]);
			for(int i=1;i<m;i++)
			{
				printf("%d",numb[i]);
			}
			
		}else
		{	
			for(i=n;i>0;i--)
			{
				for(j=i-1;j>0;j--)
				{
					if(numb[i]>numb[j])
					{
						t=numb[j];
						numb[j]=numb[i];
						numb[i]=t;
					}
				}
			}
			printf("%d",numb[0]);
			for(int i=1;i<n;i++)
			{
				printf("%d",numb[i]);
			}
		printf("\n");	
		}
		return 0;
	}
