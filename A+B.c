#include <stdio.h>
#include <string.h>
int main()
{
	char a[11],b[11];
	int pa,pb;
	int m=0;
	int n=0;
	int i;
	scanf("%s %d %s %d",a,&m,b,&n);
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]-'0')==pa)
		{
			pa=10*pa+pa;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n",pa+pb);
	return 0;
}
