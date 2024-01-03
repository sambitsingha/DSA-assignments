#include <stdio.h>
int main()
{
    int a[10], i, n, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The original array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &num);
    printf("\nEnter the position where you want to insert the element: ");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos] = num;
    n++;
    printf("\nThe array after insertion is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}