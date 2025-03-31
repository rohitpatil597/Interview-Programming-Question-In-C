#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int size;
    int *s;
};

void create(struct stack *st)
{
    
    printf("Enter the Size:");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size *sizeof(int));
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d",st.s[i]);
    }
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    printf("Full");
    else
        st->top++;
    st->s[st->top]=x;
}

int pop(struct stack *st)
{
    int x=0;
    
    if(st->top==-1)
     return -1;
    else
    x=st->s[st->top];
    st->top--;
    return x;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    display(st);
    return 0;
}
