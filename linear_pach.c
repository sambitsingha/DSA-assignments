#include <stdio.h>
int findElement(int arr[], int n, int val, int *pos)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            *pos = i;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[20], i, n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int val, pos;
    printf("\nEnter the number you want to find: ");
    scanf("%d", &val);

    int flag = findElement(arr, n, val, &pos);

    if (flag == 0)
        printf("\nElement not found");
    else
        // Position in array starts from 0
        printf("\nElement %d is found at position %d", val, pos);

    return 0;
}