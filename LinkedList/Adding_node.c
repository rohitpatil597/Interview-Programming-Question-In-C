#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* next;
    int data;
};

struct Node* first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->next=NULL;
    first->data=A[0];
    first->next=last;
    last=first;
    for(i=1;i<n;i++)
    {
       t=(struct Node*)malloc(sizeof(struct Node)); 
       t->next=NULL;
       t->data=A[i];
       last->next=t;
       last=t;
    }
}
void Insert_Beg(int x)
{
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->next=NULL;
    p->data=x;
    p->next=first;
    first=p;
}
void Insert_Pos(struct Node*p,int x,int pos)
{
    struct Node *t,*last;
    int i;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->next=NULL;
    t->data=x;
    for(i=0;i<pos-1;i++)
    {
        p=p->next;
        t->next=p->next;
        p->next=t;
        break;
    }
}
void Insert_End(struct Node*p,int x)
{
    struct Node*t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->next=NULL;
    t->data=x;
    last->next=t;
    last=t;
}
void display(struct Node* p)
{
    while(p !=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Insert_End(first,15);
    display(first);
    return 0;
}
