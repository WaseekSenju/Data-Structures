#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *next;
    int value;
} *first, *second, *third = NULL;

struct Node *create(int A[], int n)
{
    struct Node *first = NULL;
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
    printf("NULL");
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
        return -999;
    }

    int x = Max(head->next);

    return (x > head->value) ? x : head->value;
}

//------------------------ MinR

int Min(struct Node *head)
{
    if (head == NULL)
    {
        return 9999;
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
struct Node* reverseList(struct Node * head){
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
    head=q;
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

//------------------------ Reverse Recursive
void Concat(struct Node *first, struct Node *second)
{
    while (first->next != NULL)
    {
        first = first->next;
    }

    first->next = second;
}

//------------------------ Reverse Recursive
struct Node *Merge(struct Node *first, struct Node *second)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    third = temp;

    while (first != NULL && second != NULL)
    {
        if (first->value > second->value)
        {
            third->next = second;
            second = second->next;
        }
        else
        {
            third->next = first;
            first = first->next;
        }

        third = third->next;
    }

    // for linking the remaing part of either of 2 lists
    if (first != NULL)
    {
        third->next = first;
    }
    if (second != NULL)
    {
        third->next = second;
    }
    return temp->next;
}

int Cycle(struct Node *p)
{
    if (p->next == NULL || p->next->next == NULL)
    {
        return 0;
    }

    struct Node *slow, *fast = p;

    do
    {
        slow = slow->next;
        fast = fast->next;

        fast = fast ? fast->next : slow;
    } while (slow && fast && slow != fast);

    if (slow == fast)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    //int A[] = {0};
    struct Node *t1;
    //, *t2;
    int B[] = {10, 20, 30, 40, 50};
    t1 = create(B, 5);

    // creating a loop
    // t1 = first->next->next;
    // t2 = first->next->next->next->next;
    // t2->next = t1;

    // second = create(B, 4);

    display(t1);
    // printf("\n");
    t1 = reverseList(t1);
    display(t1);
    // printf("\n");
    // printf("count is %d\n", Count(first));
    // printf("sum is : %d\n", Sum(first));
    // printf("max is : %d\n", Max(first));
    // printf("min is : %d\n", Min(first));
    // struct Node *temp = SearchR(first, 3);
    // printf("Key found %d  at address %d \n", temp->value, temp);
    //printf("%d", Cycle(first));
    // struct Node *temp = Merge(first, second);
    // displayRecursive(temp);

    return 0;
}