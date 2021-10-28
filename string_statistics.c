#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	int n;
	int k=0;
	char a[1000];
	scanf("%d",&n);
	getchar( );//吸收回车
	for(int i=0;i<n;i++)
	{
		fgets(a,1000,stdin);
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]>='0'&&a[j]<='9')
			{
				k++;
			}
		}
	
	printf("%d\n",k);
	
	}
	return 0;
}
