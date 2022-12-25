#include <stdlib.h>
#include <stdio.h>
struct Node
{
    int value;
    struct Node *next;
} *head = NULL;

void create(int A[], int n)
{
    head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp, *last;
    head->value = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->value = A[i];
        temp->next = last->next; // "last-> next" means the head becayse the last node is always pointing to the head(for first insertion)
        last->next = temp;       // basically head's next pointing to the second node (for first insertion )
        last = temp;
    }
}

void insert(int n, struct Node *p)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    do
    {
   

    } while (p != head);
}

void display(struct Node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        printf("%d->", p->value);
        display(p->next);
    }
}

int main()
{
    int A[] = {0, 1};
    create(A, 2);
    display(head);
    return 0;
}