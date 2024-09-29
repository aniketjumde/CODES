#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};

struct node * create(int n)
{
	int i;
	struct node *f, *l,*t;

	f = NEWNODE;
	printf("Enter the Data : ");
	scanf("%d", &f->data);
	f->next = NULL;

	l=f;

	for(i=2; i<=n; i++)
	{
		t = NEWNODE;
		printf("Enter the Data : ");
		scanf("%d", &t->data);
		l->next = t;
		l = l->next;
		l->next = NULL;
	}
	return f;
}

void display(struct node *f)
{
	struct node *t;

	for(t=f; t!=NULL; t=t->next)
	{
		printf("%d ", t->data);
	}

	printf("\n");
}

struct node* eraseall(struct node *f)
{
	struct node *t;

	while(f!=NULL)
	{
		t = f;
		f = f->next;
		free(t);
	}
	return f;  // return NULL;
}

struct node * add_first(struct node *f)
{
	struct node *t;

	t = NEWNODE;
	printf("Enter the Data to add first: ");
	scanf("%d", & t->data);
	t->next = NULL;


	t->next = f;
	f = t;

	return f;
}

struct node * del_first(struct node *f)
{
	struct node *t;

	t= f;
	f = f->next;
	free(t);
	return f;
}


struct node * del_last(struct node *f)
{
	struct node *S, *L;

	for(L=f; L->next != NULL; L=L->next)
	{
		S=L;
	}

	free(L);
	S->next = NULL;

	return f;
}

struct node * add_last(struct node* f)
{
	struct node *t, *L;

	t = NEWNODE;
	printf("Enter the Data to add last: ");
	scanf("%d", & t->data);
	t->next = NULL;

	// Using L to Traverse the List

	for(L=f; L->next != NULL; L=L->next);


	L->next = t;
	return f;

}

int lengthLL(struct node *f)
{
	int cnt = 0;
	struct node *t;

	for(t=f; t!=NULL; t=t->next)
	{
		cnt++;
	}

	return cnt;
}

int sumLL(struct node *f)
{
    int sum=0;
    struct node *t;
    
	for(t=f; t!=NULL; t=t->next)
	{
		sum=sum+t->data	}
    return sum;
}

int main()
{
	struct node *head = NULL;
	int n;
	int ans;


	printf("How many nodes : ");
	scanf("%d", &n);

	head = create(n);

	printf("LinkedList : ");
	display(head);


	ans = lengthLL(head);
	printf("No. of Nodes : %d \n", ans);

	ans = sumLL(head);
	printf("Sum of Elments : %d \n", ans);
	

/*
	head = add_first(head);

	printf("ADD FIRST : ");
	display(head);

	head = del_first(head);

	printf("DEL FIRST : ");
	display(head);

	head = add_last(head);
	printf("ADD LAST : ");
	display(head);


	head = del_last(head);

	printf("DEL LAST : ");
	display(head);
*/
	


	head = eraseall(head);
	return 0;
}