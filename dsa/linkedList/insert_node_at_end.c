#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);

int main()
{

    int data = 40;
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 5;
    ptr->link = NULL;

    head->link = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->link = NULL;

    head->link->link = ptr;

    add_at_end(head, data);
}

void add_at_end(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    struct node *p;
    p = head;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = temp;

    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->link;
    }
}