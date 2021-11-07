#include<stdio.h>
#include<string.h>
struct Student
{
	char cName[20];
	int iNumber;
	char cSex;
	int iGrade;
}student;
int main()
{
	struct Student* pStruct;
	pStruct=&student;
	strcpy(pStruct->cName,"SuYuQun");
	pStruct->iNumber=12061212;
	pStruct->cSex='W';
	pStruct->iGrade=2;
	printf("---the student's information---\n");
	printf("Name:%s\n",student.cName);
	printf("Number:%d\n",student.iNumber);
	printf("Sex:%c\n",student.cSex);
	printf("Grade:%d\n",student.iGrade);
	return 0;
}
