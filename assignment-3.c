// 1 -->  WAP to find out the sum of first 10 numbers.

/*#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + i;
    printf("\nThe sum is %d", sum);
    return 0;
}*/

// 2 -->  WAP to calculate the sum of the numbers from m to n where m and n will be inputted by the user

/*#include <stdio.h>
int main()
{
    int i, sum = 0, m, n;
    printf("\nEnter the lower limit (m) and upper limit (n): \n");
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
        sum = sum + i;
    printf("Sum = %d\n", sum);
    return 0;
}*/

// 3 --> WAP to print the multiplication table of any inputted number

/*#include <stdio.h>
int main()
{
    int i, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nThe multiplication table is %d is -->", n);
    for (i = 1; i <= 10; ++i)
        printf("\n%d x %d = %d", n, i, n * i);
    return 0;
}*/

// 4 --> WAP to find out the factorial of any number.

/*#include <stdio.h>
int main()
{
    int i, fact = 1, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        fact *= i;
    printf("\nThe factorial of %d is %d", n, fact);
    return 0;
}*/

// 5 --> Not possible

// 6 --> WAP to check whether an inputted number is a prime number or a composite number.

/*#include <stdio.h>
int main()
{
    int i, flag = 0, n;
    printf("\n Enter a Number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("\n The given number is not Prime.");
    }

    else
    {
        for (i = 2; i <= n / 2; i++)
            if ((n % i) == 0)
            {
                flag++;
                break;
            }
    }
    // n should be greater than 1
    if (flag == 0)
    {
        printf("\nThe Given number is Prime");
    }
    else
    {
        printf("\nThe Given number is Composite");
    }
    return 0;
}*/

// 7 --> WAP to check whether an inputted number is a palindrome number or not

/*#include <stdio.h>
int main()
{
    int i, n, rem, rev = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int num = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == num)
        printf("\n%d is palindrome", num);
    else
        printf("\n%d is not palinrome", num);
    return 0;
}*/

// 8 -->  WAP to check whether an inputted number is an Armstrong number or not

/*#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, count = 0, sum = 0, rem;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (n == sum)
        printf("\n%d is an Armstrong number", n);
    else
        printf("\n%d is not an armstrong number", n);
    return 0;
}*/

// 9 --> WAP to enter a decimal number. Display the binary equivalent of this decimal number.
