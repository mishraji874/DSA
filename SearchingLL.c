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

struct node *search(struct node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        return p;
        p=p->next;
    }
    return -1;
}

struct node *Rsearch(struct node *p,int key)
{
    if(p==NULL)
    return NULL;
    if(key==p->data)
    return p;
    return Rsearch(struct node *(p->next),int key);
}