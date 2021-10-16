#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+c>b&&a+c>b&&b+c>a){
		if(a==b||b==c||a==c){
			if(a==b&&b==c){
				printf("1");
				}else{
			printf("2");
			}
		}else{
			printf("3");
		}
	}else{
	printf("0");
	}
	return 0;
}
