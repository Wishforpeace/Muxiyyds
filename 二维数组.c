#include <stdio.h>
int main(){
	int a[2][3],b[3][2];
	int max,min;
	int h,l,i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
    	}			
	printf("输出二维数组：\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	//求数组最大元素及其下标
	max=a[0][0];
	h=0;
	l=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(max<a[i][j]){
				max=a[i][j];
				h=i;
				l=j;
			}
		}
	
	}
	printf("数组最大元素是：\n");
	printf("max:a[%d][%d]=%d\n",h,l,max);
	//求最小
	h=0;
	l=0;
	min=a[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(min>a[i][j]){
			min=a[i][j];
			h=i;
			l=j;
			}
		}
	
	}
	printf("数组最小元素是：\n");
	printf("min:a[%d][%d]=%d\n",h,l,min);
	//数组a存入b
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("转换后的数组是：\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[j][i]);
		}
		printf("\n");
	}
	return 0;
}


