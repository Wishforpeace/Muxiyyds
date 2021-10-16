#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int m=1;
	//判断输入数值是否符合范围
	if(a>=0&&a<=100&&b>=0&&b<=100){
	 //判断合格
		if(a>=60&&b>=60){
			m=2;
	}
	//使用switch-case
	switch(m){
	case 1:
	printf("it is not pass");
	break;
	case 2:
	printf("it is pass");
	break;
	}
	

	}else{
	printf("it is erroe");
	}
	return 0;	
}

