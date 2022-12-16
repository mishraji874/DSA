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

int Count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int RCount(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return RCount(p->next) + 1;
    }
}

int main()
{
    int A[5] = {3, 5, 7, 9, 11};
    create(A, 5);
    printf("Count in iterative is %d \n", Count(first));
    printf("Count in recursive is %d \n", RCount(first));
    return 0;
}