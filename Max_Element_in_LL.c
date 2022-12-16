#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int max(struct node *p)
{
    int m = -32768,MIN_INT;
    while(p! = NULL)
    {
        if (p->data > m)    
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

int RMax(struct node *p)
{
    int x=0;
    if(p==0)
    return MIN_INT;
    else
    {
        x=max(p->next);
        if(x->p->data)
        return x;
        else
        return p->data;
    }
}