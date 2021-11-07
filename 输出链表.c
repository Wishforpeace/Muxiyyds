void Print(struct Student*pHead)
{
	struct Student*pTemp;
	int ilndex=1;
	printf("----the List has %d members:----\n",iCount);
	ptrintf("\n"):
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",ilndex);
		printf("the name is:%s\n",pTemp->cName);
		printf("thec number is:%d\n",pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		ilndex++;
	}
