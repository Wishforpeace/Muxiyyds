#include <stdio.h>
int main(){
int
	int i,n,m,sum;
    while(scanf("%d",&n)!=EOF)
	{
		sum=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m);
			if(m%2!=0)
			sum*=m;
		}
		printf("%d\n",sum);
	}
	return 0;

}
