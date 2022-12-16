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

int Add(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int RAdd(struct Node *p)
{
    int sum = 0;
    if (p != NULL)
    {
        return RAdd(p->next) + p->data;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int A[5] = {3, 5, 7, 9, 11};
    create(A, 5);
    printf("Sum in iterative %d \n",Add(first));
    printf("Sum in recursive %d \n",RAdd(first));
    return 0;
}