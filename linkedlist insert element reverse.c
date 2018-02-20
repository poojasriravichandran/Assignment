#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
typedef struct node n;
n *head=NULL;

void create(n **head1)
{
	n *newnode;
	int a;
	scanf("%d ",&a);
	newnode=(n*)malloc(sizeof(n));
	newnode->data=a;
	newnode->next=(*head1);
	(*head1)=newnode;
}
void display(n*temp)
{
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()

{
	create(&head);
	create(&head);
	create(&head);
	create(&head);
	display(head);
	return 0;
}


