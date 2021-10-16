#include <stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
		if(i==2){
			continue;
		}
		for(j=0;j<i;j++){
		printf(" ");
		
		}
		for(j=0;j<5-2*i;j++){
			printf("*");
			
		}
		printf("\n");
	};
	
	return 0;
}
