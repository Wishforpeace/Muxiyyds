#include <stdio.h>
int main(){
	//保存姓名，并输出
	char* Array[3];//字符指针数组
	int index;
	Array[0]="Wang";
	Array[1]="Liu";
	Array[2]="Su";
	for(index=0;index<3;index++){
	printf("%s\n",Array[index]);
	}
	return 0;
}
