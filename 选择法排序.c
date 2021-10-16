#include <stdio.h>
int main(){
	int i,j;
	int a[10];
	int iTemp;
	int iPos;
	printf("为数组赋值\n");

	for(i=0;i<10;i++){	
		printf("a[%d]=",i);
		scanf("%d",&a[i]);

	}
	//从小到大排序
	for(i=0;i<9;i++){
	iTemp =a[i];
	iPos=i;
	for(j=i+1;j<10;j++){
		if(a[j]<iTemp){
		iTemp=a[j];
		iPos=j;
		
		}
	}
	//交换数值
	a[iPos]=a[i];
	a[j]=iTemp;

	}
	//输出数组
	for(i=0;i<10;i++){
	printf("%d\t",a[i]);
	if(i==4){
	printf("\n");
	}
	
	}
	return 0;





}



