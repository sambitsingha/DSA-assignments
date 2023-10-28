// 1. To find the area of a circle.

/*#include <stdio.h>
const float pi = 3.14;
int main()
{
    float area, r;
    printf("\nEnter the radius: ");
    scanf("%f", &r);
    area = pi * r * r;
    printf("The area is %.2f\n", area);
    return 0;
}*/

// 2. To check whether a given number is prime or not.

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

// 3. To print or display all the even numbers from 30 to 60

/*#include <stdio.h>
int main()
{
    int i;
    for (i = 30; i <= 60; i++)
    {
        if (i % 2 == 0)
            printf("%d\t", i);
        else
            continue;
    }
    return 0;
}*/

// 4- To display the Fibonacci series up to 500 terms.

/*#include <stdio.h>
int main()
{
    long long int t1 = 0, t2 = 1, nxt = t1 + t2, n = 500, i;
    printf("Fibonacci Series is:\n");
    printf("%lld\t%lld", t1, t2);
    for (i = 3; i <= n; i++)
    {
        printf("\t%lld", nxt);
        t1 = t2;
        t2 = nxt;
        nxt = t1 + t2;
    }
    return 0;
}*/

// 5 - To print the reverse of a given number

/*#include <stdio.h.>
int main()
{
    int rev = 0, rem, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n%d is original number", n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("\n%d is reversed number", rev);
    return 0;
}*/

// 6 - o check whether a number is armstrong or not.

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

// 7- WAP to display the number of days in a corresponding month using switch case.

/*#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number (1 to 12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days: 31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days: 30\n");
        break;
    case 2:
        printf("Number of days: 28 or 29 (leap year)\n");
        break;
    default:
        printf("Invalid month number\n");
    }
    return 0;
}*/

// 8 - WAP to add first 10 natural number.

/*#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("\nSum is %d", sum);
    return 0;
}*/

// 9 - WAP to find HCF and LCM

/*#include <stdio.h>
int main()
{
    int num1, num2, temp, hcf, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int smaller = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= smaller; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    lcm = (num1 * num2) / hcf;
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}*/

// 10 - WAP to print the series : n + n² + n³...... + n ^ n
/*#include <stdio.h>

    int
    main()
{
    int n, i;
    long long int sum = 0, term = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Series: ");
    for (i = 1; i <= n; ++i)
    {
        term *= n;
        sum += term;
        if (i != n)
        {
            printf("%lld + ", term);
        }
        else
        {
            printf("%lld", term);
        }
    }

    printf("\nSum of the series: %lld\n", sum);

    return 0;
}*/

// 11 - WAP to print multiplication table for numbers from 1 to 12 using do while loop.

/*#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nThe multiplication table is %d is -->", n);
    do
    {
        printf("\n%d x %d = %d", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}*/

// 15 - WAP to check whether the entered number is palindrome or not

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