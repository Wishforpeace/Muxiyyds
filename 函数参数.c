#include <stdio.h>
void DrinkMilk(char *cBottle);
int main()
{
	char *cPoke[]="";
	printf("Mother wanna give the baby");
	scanf("%s",&*cPoke);
	DrinkMilk(cPoke);
	return 0;


}
void DrinkMilk(char *cBottle)
{
	printf("The baby drink the %s\n",cBottle);

}
