#include <stdio.h>
#include <string.h>
int main(){
	int i,n;
	double a[10000],sum,min,max;
	while(scanf("%d",&n)!=EOF){
	for(i=0;i<n;i++){
	scanf("%lf",&a[i]);
	}
	sum=0;
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
	if(min>=a[i])

		min=a[i];
	}
	for(i=0;i<n;i++){
	if(max<=a[i])
		max=a[i];
	}
	for(i=0;i<n;i++){
	sum+=a[i];

	}
	printf("%.2lf\n",(sum-min-max)/(n-2));//输出双精度
	return 0;
	}




}
