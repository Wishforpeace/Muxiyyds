#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char cName[20];
	int iNumber;
	struct Student*pNext;
};
int iCount;
struct Student*Create()
{
	struct Student*pHead=NULL;
	struct Student*pEnd;
	struct Student*pNew;
	iCount=0;
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("please first enter Name,then Number\n");
	scanf("%s",pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;
			pEnd=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));
		scanf("%s",pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
void Print(struct Student*pHead)
{
	struct Student*pTemp;
	int ilndex=1;
	printf("---the list has %d members:---\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",ilndex);
		printf("the name is:%s\n",pTemp->cName);
		printf("the number is:%d\n",pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		ilndex++;
	}
}
int main(void)
{
	struct Student*pHead;
	pHead=Create();
	Print(pHead);
	return 0;
	
}
