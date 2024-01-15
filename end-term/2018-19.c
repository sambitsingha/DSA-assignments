// Qs -2
// a -

// #include <stdio.h>
// int main()
// {
//     int x, y;
//     printf("Enter x and y: \n");
//     scanf("%d%d", &x, &y);
//     if (y == 0)
//     {
//         printf("y cannot be zero.\n");
//         return 1;
//     }
//     int result = ((5 * x * x) + 3 * y) / ((7 * y * y * y) - 2);
//     printf("%d", result);
//     return 0;
// }

// b -

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int salary;
//     float bonus, finalSalary;
//     char gender[10];
//     printf("Enter your salary: \n");
//     scanf("%d", &salary);
//     printf("Enter your gender: ");
//     scanf("%s", gender);
//     if (strcmp(gender, "male") == 0)
//     {
//         if (salary >= 10000)
//         {
//             bonus = (salary * 0.05);
//             finalSalary = salary + bonus;
//             printf("Final Salary = %f", finalSalary);
//         }
//         else
//         {
//             bonus = (salary * 0.07);
//             finalSalary = salary + bonus;
//             printf("Final Salary = %f", finalSalary);
//         }
//     }
//     else if (strcmp(gender, "female") == 0)
//     {
//         if (salary >= 10000)
//         {
//             bonus = (salary * 0.1);
//             finalSalary = salary + bonus;
//             printf("Final Salary = %f", finalSalary);
//         }
//         else
//         {
//             bonus = (salary * 0.12);
//             finalSalary = salary + bonus;
//             printf("Final Salary = %f", finalSalary);
//         }
//     }
//     return 0;
// }

// c -

// #include <stdio.h>
// int main()
// {
//     int i, n, num, arr[10], flag = 0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("\nEnter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nEnter element to find: ");
//     scanf("%d", &num);
//     for (i = 0; i, n; i++)
//     {
//         if (num == arr[i])
//         {
//             flag = 1;
//             break;
//         }
//     }
//     printf("Position of the element is: %d", i);
//     return 0;
// }
