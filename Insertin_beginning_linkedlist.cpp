#include <iostream>
struct node {
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};
node *insert(node *head,int x)
{
    node *temp=new node(x);
    temp -> next=head;
    return temp;
}
int main()
{
    node *temp=NULL;
    head=insert(head,30);
    head=insert(head,20);
    head=insert(head,10);
    return 0;
}