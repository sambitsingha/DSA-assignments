// 1 - All linked list operations
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void append(struct node **, int);
void insert(struct node **, int, int);
void delete(struct node **, int);
void display(struct node *);
void main()
{
    int i, ch, n, pos, e;
    system("cls");
    struct node *p = NULL;
    printf("\nEnter no of elements to create a list: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &e);
        append(&p, e);
    }
    while (1)
    {
        printf("\n1. Insert");
        printf("\n2.Delete");
        printf("\n3. Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter value to be inserted: ");
            scanf("%d", &e);
            printf("\nEnter the position: ");
            scanf("%d", &pos);
            insert(&p, pos, e);
            break;
        case 2:
            printf("\nEnter position from where element is deleted: ");
            scanf("%d", &pos);
            delete (&p, pos);
        case 3:
            display(p);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice");
            break;
        }
    }
}
void append(struct node **start, int num)
{
    struct node *temp, *r;
    temp = *start;
    if (*start == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *start = temp;
    }
    else
    {
        while (temp->link != NULL)
            temp = temp->link;
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
}
void insert(struct node **start, int loc, int num)
{
    struct node *temp, *r;
    int j;
    temp = *start;
    if (loc == 1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *start = temp;
    }
    else
    {
        for (j = 1; j < loc - 1; j++)
            temp = temp->link;
        if (temp != NULL)
            r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        r->link = temp->link;
        temp->link = r;
    }
}
void delete(struct node **start, int loc)
{
    struct node *temp, *prev;
    int j;
    temp = *start;
    prev = NULL;
    if (loc == 1)
    {
        printf("\nVallue deleted: %d");
        temp->data;
        *start = temp->link;
        free(temp);
    }
    else
    {
        for (j = 1; j < loc; j++)
        {
            prev = temp;
            temp = temp->link;
        }
        if (prev != NULL)
        {
            printf("\nValue deleted = %d\n", temp->data);
            prev->link = temp->link;
            free(temp);
        }
    }
}
void display(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->link;
    }
}