// 1 - WAP to find out the mean of n numbers using array

/*#include <stdio.h>
int main()
{
    int a[20], i, n, mean, sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    mean = sum / n;
    printf("\n%d is the mean", mean);
    return 0;
}*/

// 2 -  WAP to find out the largest and smallest element of an array

/*#include <stdio.h>
int main()
{
    int a[20], i, n, max, min;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("\nThe maximum value in the array is:%d\n", max);
    printf("\nThe minimum value in the array is:%d\n", min);
    return 0;
}*/

// 3 -  WAP to insert a new element at any desired location of a partially filled array

/*#include <stdio.h>
int main()
{
    int a[20], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    int pos, val;
    printf("Enter position where you want to insert the element:");
    scanf("%d", &pos);
    printf("Enter the value which you want to insert:");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = val;
    printf("Modified Array:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}*/

// 4 -  WAP to delete an element from a given position of an array

#include <stdio.h>
int main()
{
    int a[20], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    int pos;
    printf("Enter the position of the element you want to delete:");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    --n;
    printf("Modified Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}