#ifndef Stack_h
#define Stack_h
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *s;
};

void create(struct stack *s)
{
    printf("Enter Size: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->s=(int*)malloc(s->size*sizeof(int));
}

void display(struct stack *s)
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%d", s->s[i]);
    }
    printf("\n");
}

void push(struct stack *s, int x)
{
    if(s->top=s->size-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s->top++;
        s->s[s->top]=x;
    }
}

void pop(struct stack *s)
{
    int x=-1;
    if(s->top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x=s->s[s->top];
        s->top--;
    }
    return x;
}

int isEmpty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *s)
{
    if(s->top=s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}