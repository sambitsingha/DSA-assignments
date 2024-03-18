// 1 - All linked list operations
/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void append(struct node **, int);
void insertBeg(struct node **, int);
void insertEnd(struct node **, int);
void insertPos(struct node **, int, int);
void deleteBeg(struct node **);
void deleteEnd(struct node **);
void deletePos(struct node **, int);
void display(struct node *);
int main()
{
    int i, ch, n, pos, e;
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
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at end");
        printf("\n3.Insert at any postion");
        printf("\n4. Delete at beginning");
        printf("\n5. Delete at end");
        printf("\n6.Delete at any postion");
        printf("\n7. Display");
        printf("\n8.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element: ");
            scanf("%d", &e);
            insertBeg(&p, e);
            break;
        case 2:
            printf("\nEnter element: ");
            scanf("%d", &e);
            insertEnd(&p, e);
            break;
        case 3:
            printf("\nEnter element: ");
            scanf("%d", &e);
            printf("\nEnter position: ");
            scanf("%d", &pos);
            insertPos(&p, pos, e);
            break;
        case 4:
            deleteBeg(&p);
            break;
        case 5:
            deleteEnd(&p);
            break;
        case 6:
            printf("\nEnter position: ");
            scanf("%d", &pos);
            deletePos(&p, pos);
            break;
        case 7:
            display(p);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
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
void insertBeg(struct node **start, int num)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *start;
    *start = temp;
}
void insertEnd(struct node **start, int num)
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
void insertPos(struct node **start, int loc, int num)
{
    struct node *temp, *r;
    int i;
    if (loc < 1)
    {
        printf("Invalid location. Location should be greater than 0.\n");
        return;
    }

    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;

    if (loc == 1)
    {
        r->link = *start;
        *start = r;
    }
    else
    {
        temp = *start;
        for (i = 1; i < loc - 1; i++)
        {
            if (temp == NULL)
            {
                printf("Invalid location. Location is greater than the length of the list.\n");
                return;
            }
            temp = temp->link;
        }
        r->link = temp->link;
        temp->link = r;
    }
}
void deleteBeg(struct node **start)
{
    struct node *temp;
    temp = *start;
    if (*start != NULL)
    {
        *start = temp->link;
        free(temp);
    }
}
void deleteEnd(struct node **start)
{
    struct node *temp, *prev;
    temp = *start;
    if (temp->link == NULL)
    {
        *start = NULL;
        free(temp);
    }
    else
    {
        while (temp->link != NULL)
        {
            prev = temp;
            temp = temp->link;
        }
        printf("\nValue deleted = %d", temp->data);
        prev->link = NULL;
        free(temp);
    }
}
void deletePos(struct node **start, int loc)
{
    struct node *temp, *prev;
    int j;
    if (loc < 1)
    {
        printf("Invalid location. Location should be greater than 0.\n");
        return;
    }

    temp = *start;
    prev = NULL;

    if (loc == 1)
    {
        printf("\nValue deleted: %d", temp->data);
        *start = temp->link;
        free(temp);
    }
    else
    {
        for (j = 1; j < loc; j++)
        {
            if (temp == NULL)
            {
                printf("Invalid location. Location is greater than the length of the list.\n");
                return;
            }
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
}*/