// 1 -> WAP to input the radius value of any circle through the keyboard and then find out its area.

/*#include <stdio.h>
const float pi = 3.14;
int main()
{
    system("cls");
    int r;
    float area;
    printf("Enter Radius: ");
    scanf("%d", &r); // Inputting a number from user into variable 'r'
    area = pi * r * r;
    printf("\nThe area of the circle is %.2f\n", area);
    return 0;
}*/

// 2 ->  WAP to find out the area of any rectangle. The length and breadth of the rectangle must be inputted by the user.

/*#include <stdio.h>
int main()
{
    system("cls");
    int l, b, area = 0;
    printf("Enter Length and Braedth: \n");
    scanf("%d%d", &l, &b); // Inputing values in variables
    area = l * b;
    printf("\nArea : %f \n", (float)area);
    return 0;
}*/

// 3 -> WAP to find out the sum of first n natural numbers where n is inputted from the keyboard.

/*#include <stdio.h>
int main()
{
    system("cls");
    int n, sum = 0;
    printf("Enter N:\n");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("\nThe sum is %d", sum);
    return 0;
}*/

// 4 -> WAP to input the three sides of any triangle and then find out its area.

/*#include <stdio.h>
#include <math.h>

int main()
{
    system("cls");
    float side1, side2, side3;
    double s, area;

    // Input the three sides of the triangle
    printf("Enter the length of side 1 ,side 2 , side 3: \n");
    scanf("%f%f%f", &side1, &side2, &side3);

    // Calculate the semi-perimeter
    s = (side1 + side2 + side3) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    // Check if the triangle is valid
    if (area > 0)
    {
        printf("\nThe area of the triangle is: %lf\n", area);
    }
    else
    {
        printf("\nThese side lengths do not form a valid triangle.\n");
    }
    return 0;
}*/

// 5 -> WAP to swap the values of two variables using a third variable.

/*#include <stdio.h>
int main()
{
    system("cls");
    int a, b, temp;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &a, &b);
    printf("\nThe numbers before swapping %d and %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe numbers after swapping %d and %d", a, b);
    return 0;
}*/

// 6 -> WAP to swap the values of two variables without using a third variable.

/*#include <stdio.h>
int main()
{
    system("cls");
    int a, b;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &a, &b);
    printf("\nThe numbers before swapping %d and %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nThe numbers after swapping %d and %d\n", a, b);
    return 0;
}*/

// 7 -> WAP to find the sum of the individual digits of any inputted three-digit positive number.

/*#include <stdio.h>
int main()
{
    int num, digit, sum = 0;

    // Input a three-digit positive number
    printf("Enter a three-digit positive number: \n");
    scanf("%d", &num);

    // Check if the input is a three-digit positive number
    if (num >= 100 && num <= 999)
    {
        // Extract and sum the individual digits
        digit = num % 10; // Get the units digit
        sum += digit;
        num /= 10; // Remove the units digit

        digit = num % 10; // Get the tens digit
        sum += digit;
        num /= 10; // Remove the tens digit

        digit = num; // Get the hundreds digit
        sum += digit;

        // Display the sum of individual digits
        printf("\nThe sum of individual digits is: %d\n", sum);
    }
    else
    {
        printf("\nInvalid input. Please enter a three-digit positive number.\n");
    }

    return 0;
}*/

// 8 -> WAP to enter the principal, time, and rate of interest. Calculate the simple interest.

/*#include <stdio.h>

int main()
{
    system("cls");
    float principal, time, rate, simpleInterest;

    // Input the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input the time in years
    printf("\nEnter the time (in years): ");
    scanf("%f", &time);

    // Input the rate of interest
    printf("\nEnter the rate of interest (as a percentage): ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display the simple interest
    printf("\nSimple Interest = %f\n", simpleInterest);

    return 0;
}*/

// 9 -> WAP to convert Fahrenheit to Celsius.

/*#include <stdio.h>

int main()
{
    system("cls");
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Display the temperature in Celsius
    printf("\nTemperature in Celsius: %f\n", celsius);

    return 0;
}*/

// 10 -> WAP to convert Celsius to Fahrenheit.
/*#include <stdio.h>

int main()
{
    system("cls");
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the temperature in Fahrenheit
    printf("\nTemperature in Fahrenheit: %f\n", fahrenheit);

    return 0;
}*/

// 11 -> WAP to find the average marks of any student by entering 5 subject marks.

/*#include <stdio.h>
int main()
{
    system("cls");

    int marks1, marks2, marks3, marks4, marks5, sum = 0;
    float average;

    printf("Enter your subject marks:\n");
    scanf("%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);

    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    average = sum / 5;

    printf("\nYour Average Mark is %.2f ", average);

    return 0;
}*/

// 12 -> WAP to calculate the gross salary of an employee by inputting the basic salary. DA is 45% and HRA is 30% of the basic salary.

/*#include <stdio.h>

int main()
{
    system("cls");
    float basicSalary, grossSalary;
    float daPercentage = 45.0;
    float hraPercentage = 30.0;

    // Input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate Dearness Allowance (DA)
    float da = (daPercentage / 100.0) * basicSalary;

    // Calculate House Rent Allowance (HRA)
    float hra = (hraPercentage / 100.0) * basicSalary;

    // Calculate the gross salary
    grossSalary = basicSalary + da + hra;

    // Display the gross salary
    printf("\nGross Salary: %.2f\n", grossSalary);

    return 0;
}*/

// 13 -> WAP to calculate hours, minutes, and seconds by inputting seconds as input. For example: INPUT: Enter the time value in seconds: 3672 OUTPUT: 1 Hour 1 minute 12 seconds

/*#include <stdio.h>

int main()
{
    system("cls");
    long int seconds, hours, minutes, remainingSeconds;

    // Input the time value in seconds
    printf("Enter the time value in seconds: ");
    scanf("%ld", &seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = seconds / 3600; // 1 hour = 3600 seconds
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60; // 1 minute = 60 seconds
    remainingSeconds = remainingSeconds % 60;

    printf("\n%ld Hour %ld Minute %ld Second\n", hours, minutes, remainingSeconds);

    return 0;
}*/

// 14 -> WAP to calculate the KM and Meter value by inputting the distance value as meters. For example: INPUT: Enter the distance value in meters: 2550 OUTPUT: 2 KMs 550 Meters

/*#include <stdio.h>

int main()
{
    int meters, kilometers, remainingMeters;

    // Input the distance value in meters
    printf("Enter the distance value in meters: ");
    scanf("%d", &meters);

    // Calculate kilometers and remaining meters
    kilometers = meters / 1000; // 1 kilometer = 1000 meters
    remainingMeters = meters % 1000;

    // Display the result
    printf("\n%d KMs %d Meters\n", kilometers, remainingMeters);

    return 0;
}*/

// 15 -> WAP to find out the largest between three numbers using Conditional operator.

/*#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use the conditional operator to find the largest number
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the largest number
    printf("\nThe largest number is: %d\n", largest);

    return 0;
}*/