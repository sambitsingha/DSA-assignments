// Factorial using recursion

/*#include <stdio.h>
int factorial(int);
int main()
{
    int n, f;
    printf("Enter the number: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("\nFactorial of %d is %d", n, f);
    return 0;
}

int factorial(int x)
{
    int fact;
    if (x == 0)
        return 1;
    else
        fact = x * factorial(x - 1);
    return fact;
}*/

// Fibonacci Series using Recursion

/*#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    int n_terms;
    printf("How many terms? ");
    scanf("%d", &n_terms);
    printFibonacci(n_terms);
    return 0;
}*/

// GCD using recursion

/*#include <stdio.h>
int gcd(int, int);
int main()
{
    int m, n, result;
    printf("Enter two positive integers : ");
    scanf("%d%d", &m, &n);
    result = gcd(m, n);
    printf("The GCD(%d,%d)=%d\n", m, n, result);
    return 0;
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}*/

// Sum of n natural numbers using recursion

/*#include <stdio.h>

int sumOfN(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumOfN(n - 1);
}

int main()
{
    int n;
    printf("\nEnter the nth term: ");
    scanf("%d", &n);
    int sum = sumOfN(n);
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}*/
