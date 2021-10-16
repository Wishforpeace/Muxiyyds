#include <stdio.h>
int main(){
//计算3*3数组对角线元素之和
	int a,b,sum;
	int array[3][3];
	printf("请输入数值\n");
	
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		scanf("%d",&array[a][b]);
	}
}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		if(a==b){
		sum=sum+array[a][b];
		}
		}
	}
	printf("the result is: %d\n",sum);
	return 0;
}
