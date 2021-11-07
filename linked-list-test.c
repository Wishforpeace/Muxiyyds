#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[20];
	int number;
	struct Student*next;
};
int count;
struct Student*create()
{
	struct Student*head=NULL;
	struct Student*end;
	struct Student*new;
	count=0;
	end=new=(struct Student*)malloc(sizeof(struct Student));
	printf("please first enter Name,then Number\n");
	scanf("%s",new->name);
	scanf("%d",&new->number);
	while(new->number!=0)
	{
		count++;
		if(count=1)
		{
			new->next=NULL;
			end=new;
			head=new;
		}
		else
		{
			new->next=NULL;
			end->next=new;
			end=new;
		}
		new=(struct Student*)malloc(sizeof(struct Student));
		scanf("%s",new->name);
		scanf("%d",&new->number);
	}
	free(new);
	return head;
}
void Print(struct Student*head)
{
	struct Student*temp;
	int ilndex=1;
	printf("---the list has %d members:---\n",count);
	printf("\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("the NO%d member is:\n",ilndex);
		printf("the name is:%s\n",temp->name);
		printf("the number is:%d\n",temp->number);
		printf("\n");
		temp=temp->next;
		ilndex++;
	}

}
int main(void)
{
	struct Student*head;
	head=create();
	Print(head);
	return 0;
}
