#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *next;
    int value;
} *first = NULL;

struct Node *create(int A[], int n)
{
    struct Node *first = NULL;
    int i;
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->value = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->value = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    return first;
}

// -------------------------Itterative Display
void display(struct Node *first)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = first;
    while (temp != NULL)
    {
        printf("%d", temp->value);
        printf("->");
        temp = temp->next;
    }
}

// -------------------------Recursive Display

void displayRecursive(struct Node *head)
{

    if (head != NULL)
    {
        printf("%d", head->value);
        printf("->");
        displayRecursive(head->next);
    }
}

//------------------------ CountR

int Count(struct Node *head)
{

    if (head != NULL)
    {
        return Count(head->next) + 1;
    }
    else
    {
        return 0;
    }
}

//------------------------ SumR

int Sum(struct Node *head)
{

    if (head->next != NULL)
    {
        return head->value + Sum(head->next);
    }
    else
    {
        return head->value;
    }
}

//------------------------ MaxR

int Max(struct Node *head)
{
    if (head == NULL)
    {
        return INT_MIN;
    }

    int x = Max(head->next);

    return (x > head->value) ? x : head->value;
}

//------------------------ MinR

int Min(struct Node *head)
{
    if (head == NULL)
    {
        return INT_MAX;
    }

    int x = Max(head->next);

    return (x < head->value) ? x : head->value;
}

//------------------------ SearchR

struct Node *SearchR(struct Node *head, int key)
{
    if (head == NULL)
    {
        return NULL;
    }

    return (head->value == key) ? head : SearchR(head->next, key);
}

//------------------------ Reverse
struct Node *Reverse(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = NULL;
    struct Node *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
    return head;
}

//------------------------ Reverse Recursive
void ReverseR(struct Node *q, struct Node *p)
{
    if (p != NULL)
    {
        ReverseR(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4};
    first = create(A, 4);

    // display(first);
    // printf("\n");
    // displayRecursive(first);
    // printf("\n");
    // printf("count is %d\n", Count(first));
    // printf("sum is : %d\n", Sum(first));
    // printf("max is : %d\n", Max(first));
    // printf("min is : %d\n", Min(first));
    // struct Node *temp = SearchR(first, 3);
    // printf("Key found %d  at address %d \n", temp->value, temp);
    ReverseR(NULL, first);
    displayRecursive(first);

    return 0;
}