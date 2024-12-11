#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
};

struct node* create(int n)
{
    struct node *f,*l,*t;
    f=NEWNODE;
    printf("Enter the data : ");
    scanf("%d",&f->data);
    f->next=NULL;
    l=f;

    for(int i=2;i<=n;i++)
    {
        t=NEWNODE;
        printf("Enter the data : ");
        scanf("%d",&t->data);
        l->next=t;
        l=l->next;
        l->next=NULL;

    }
    printf("\n");

    return f;

}

void display(struct node *f)
{
    struct node *t;
    for(t=f;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
    printf("\n");
    
}

struct node* earesall(struct node *f)
{
    struct node *t;
    while(f!=NULL)
    {
        t=f;
        f=f->next;
        free(t);
    }
    printf("\n");

    return f;
}

struct node* add_first(struct node *f)
{
    struct node *t;
    t=NEWNODE;
    printf("Enter the data on first add : ");
    scanf("%d",&t->data);
    t->next=NULL;
    t->next=f;
    f=t;
    printf("\n");

    return f;

}

struct node* del_first(struct node *f)
{
    struct node *t;
    t=f;
    f=f->next;
    free(t);
    printf("\n");

    return f;

}

struct node* add_last(struct node *f)
{
    struct node *t,*l;
    t=NEWNODE;
    printf("Enter the data on the last add : ");
    scanf("%d",&t->data);
    t->next=NULL;

    for(l=f;l->next!=NULL;l=l->next);
    // for loop is use for travelling the location
    l->next=t;

    printf("\n");
    return f;
}

struct node* del_last(struct node *f)
{
    struct node *t,*l,*s;

    for(l=f;l->next !=NULL;l=l->next)
    {
        s=l;
    }
    free(l);
    s->next=NULL;

    printf("\n");

    return f;
}

int sumll(struct node *f)
{
    int sum=0;
    struct node *t;
    for(t=f;t!=NULL;t=t->next)
    {
        sum=sum+t->data;
    }
    printf("\n");

    return sum;
}


int lengthll(struct node *f)
{
    int cnt=0;
    struct node *t;

    for(t=f;t!=NULL;t=t->next)
    {
        cnt++;
    }
    printf("\n");

    return cnt;
}

void no_of_odd_even(struct node *f)
{
    struct node *t;
    int cnt_odd;
    int cnt_even;
    cnt_even=0;
    cnt_odd=0;
    for(t=f;t!=NULL;t=t->next)
    {
        if(t->data %2==0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }
    printf("No.of odd number is : %d \n",cnt_odd);
    printf("No.of even number is : %d \n",cnt_even);

    printf("\n");

}

void positive_negative(struct node *f)
{
    struct node *t;
    int positve_no_cnt;
    int negative_no_cnt;
    positve_no_cnt=0;
    negative_no_cnt=0;

    for(t=f;t!=NULL;t=t->next)
    {
        if((t->data)>0)
        {
            positve_no_cnt++;
        }
        else
        {
            negative_no_cnt++;
        }
    }
    printf("No.of.Positive number is : %d \n",positve_no_cnt);
    printf("No.of.Negative number is : %d \n",negative_no_cnt);

    printf("\n");
}

void Odd_even(struct node *f)
{
    struct node *t;

   printf("Even number : ");
   for(t=f;t!=NULL;t=t->next)
    {
        if(t->data %2==0)
        {
            printf("%d ",t->data);
        }
       
    }

    printf("\nOdd number : ");
   for(t=f;t!=NULL;t=t->next)
    {
        if(t->data %2==1)
        {
            printf("%d ",t->data);
        }
       
    }

    printf("\n");
}

void alternative_data(struct node *f)
{
    struct node *t;
    int index=0;

    printf("\nAlternative data :");
    for(t=f;t!=NULL;t=t->next,index++)
    {
        if(index %2==0)
        {
            printf("%d ",t->data);
        }
    }
   
    printf("\n");

}

int searchLL(struct node *f,int key)
{
    struct node *t;
    int pos=1;
    for(t=f;t!=NULL;t=t->next,pos++)
    {
        if(t->data ==key)
        {
            return pos;
        }
    }
    printf("\n");

    return -1;
}

int findreplace(struct node *f,int key,int replace)
{
    struct node *t;
    int rep_cnt;
    rep_cnt=0;
    for(t=f;t!=NULL;t=t->next)
    {
        if(t->data == key)
        {
            t->data=replace;
            rep_cnt++;
        }
    }
    printf("\n");

    return rep_cnt;
}

struct node* insertion(struct node* f,int pos)
{
    struct node *t,*s;
    t=NEWNODE;
    printf("Enter the data :");
    scanf("%d",&t->data);
    t->next=NULL;

    if(pos==1)
    {
        t->next=f;
        f=t;

        return f;
    }
    else
    {
        s=f;
        for(int i=1;i<=pos-2 && s!=NULL;i++)
        {
            s=s->next;
        }

        if(s==NULL)
        {
            printf("Invalid Position \n");
            free(t);
            return f;
        }
        else
        {
            t->next=s->next;
            s->next=t;

            return f;
        }
       
    }
}

struct node* delete(struct node *f,int pos)
{
    struct node *t,*s;
    
    if(pos==1)
    {
        t=f;
        f=f->next;
        free(t);
        return f;
    }
    else
    {
        s=f;

        for(int i=1;s!=NULL && i<=pos-2;i++)
        {
            s=s->next;
        }

        if(s==NULL)
        {
            printf("Invalid position..!!");
            return f;
        }
        else
        {
            s->next=t;
            s->next=t->next;
            free(t);
            return f;
        }

    }
}

int main()
{
    struct node *head;
    int n;
    int ans;
    printf("How many nodes create : ");
    scanf("%d",&n);

    head=create(n);
    printf("\nSingly Linkdlist :");
    display(head);

    ans=lengthll(head);
    printf("No of Nodes : %d \n",ans); 

    ans=sumll(head);
    printf("Sum of All Nodes : %d\n\n",ans);
    
    head=add_first(head);
    printf("Add First : ");
    display(head);


    head=del_first(head);
    printf("Del First : ");
    display(head);

    head=add_last(head);
    printf("add last : ");
    display(head);

    head=del_last(head);
    printf("Del last : ");
    display(head);

    

    //Write a function which counts no.of odd & even number in linklist
    no_of_odd_even(head);

    //Write a function which counts no.of positive & negative number in linklist
    positive_negative(head);

    //Write a function which prints odd & even number in linklist
    Odd_even(head);

    //Write a function which prints alternative data from a linkedlist
    alternative_data(head);

    int Search_element;
    int pos;
    printf("\nEnter the element you want to search in linked list : ");
    scanf("%d",&Search_element);
    pos=searchLL(head,Search_element);
    if(pos==-1)
    {
        printf("%d is not found \n",Search_element);
    }
    else
    {
        printf("%d is found at position %d \n",Search_element,pos);
    }
 
    //Write a function findReplace which search given data & replace it by given element.
    //this function returns no.of repacements

    int replace;
    int repetation;
    printf("\n------Find & Replacement------- \n");
    printf("Find the number in linked list  :");
    scanf("%d",&Search_element);
    printf("Replace the number by : ");
    scanf("%d",&replace);
    repetation=findreplace(head,Search_element,replace);
    printf("no of replacement : %d\n",repetation);
    display(head);

    printf("\n-------------Insert linked list----------------\n");
    printf("which position you want to insert linked list : ");
    scanf("%d",&pos);

    head=insertion(head,pos);
    display(head);

    printf("\n-------------delete linked list----------------\n");
    printf("Which position you want to delete :");
    scanf("%d",&pos);
    head=delete(head,pos);
    display(head);

    head=earesall(head);
    
    return 0;
}