#include <stdio.h>
int main(){
	char cString[100];
	int index,iword=1;
	char cBlank;
	gets(cString);
	if(cString[0]=='\0')
	{
		printf("There is no char\n");
	
	}else if(cString[0]==' '){
	
	printf("First char just is a blank\n");
	}
	else
	{
		for(index=0;cString[index]='\0';index++)
		{
			cBlank=cString[index];
			if(cBlank==' '){
				iword++;
				}

			}
			printf("%d\n",iword);
		}
		return 0;


}
