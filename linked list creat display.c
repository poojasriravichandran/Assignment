#include <stdio.h>
	struct node
	{
		struct node*next;
	};
	typedef struct node s;
int main() {
	s *head,*first,*second,*third,*temp;
	head=(s*)malloc(sizeof(s));
	first=(s*)malloc(sizeof(s));
	second=(s*)malloc(sizeof(s));
	third=(s*)malloc(sizeof(s));
	head->data=40;
	head->next=first;
	first->data=50;
	first->next=second;
	second->data=60;
	second->next=third;
	third->data=70;
	third->next=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
