// Find a peak element which is not smaller than its neighbours

/*#include <stdio.h>
int main()
{
    int a[10], n, i;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int peak;
    for (i = 0; i < n; i++)
    {
        if (a[i + 1] > a[i] && a[i + 1] > a[i + 2])
        {
            peak = a[i + 1];
            break;
        }
    }
    printf("Peak Element is :%d\n", peak);
    return 0;
}*/

// WAP to count pairs with given sum

/*#include <stdio.h>
int main()
{
    int a[10], n, i, sum;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the sum you want: ");
    scanf("%d", &sum);
    int c = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
                c++;
        }
    }
    printf("Number of Pairs are:%d", c);
    return 0;
}*/