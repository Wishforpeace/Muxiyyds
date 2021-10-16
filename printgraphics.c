#include <stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=2;i++){
		
		for(j=0;j<i;j++){
		printf(" ");
		}
		for(j=0;j<5-2*i;j++){
		printf("*");
		}
	printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=1;j>i;j--){
		printf(" ");
		
		}
		for(j=1;j<=2*i+3;j++){
		printf("*");
		}	
		printf("\n");
	}
	return 0;
}
