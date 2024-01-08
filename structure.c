// 1- WAP to define a structure BOOK having members as title, author name, no. of pages, and price.Enter the details of a book and display them.
/*#include <stdio.h>

    struct BOOK {
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main() {
    struct BOOK book;

    printf("Enter the title of the book: ");
    scanf("%s", book.title);

    printf("Enter the author name: ");
    scanf("%s", book.author);

    printf("Enter the number of pages: ");
    scanf("%d", &book.pages);

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);

    return 0;
}*/

// 2 - WAP to define a structure POINT having elements as Xco, and Yco. Enter two points and then find out the distance between them

/*#include <stdio.h>
#include <math.h>

struct POINT {
    int Xco;
    int Yco;
};

float calculateDistance(struct POINT p1, struct POINT p2) {
    int xDiff = p2.Xco - p1.Xco;
    int yDiff = p2.Yco - p1.Yco;
    float distance = sqrt(xDiff * xDiff + yDiff * yDiff);
    return distance;
}

int main() {
    struct POINT point1, point2;

    printf("Enter the X-coordinate of point 1: ");
    scanf("%d", &point1.Xco);

    printf("Enter the Y-coordinate of point 1: ");
    scanf("%d", &point1.Yco);

    printf("Enter the X-coordinate of point 2: ");
    scanf("%d", &point2.Xco);

    printf("Enter the Y-coordinate of point 2: ");
    scanf("%d", &point2.Yco);

    float distance = calculateDistance(point1, point2);

    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}*/

// 3 -  WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary.Enter the details of 5 employees and display the details of each employee.

/*#include <stdio.h>

struct EMPLOYEE {
    char name[100];
    int empid;
    char department[100];
    int age;
    float salary;
};

int main() {
    struct EMPLOYEE employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].empid);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].empid);
        printf("Department: %s\n", employees[i].department);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}*/

// 4- WAP to define a structure STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students.Display the details of the student having the highest CGPA.

/*#include <stdio.h>

struct STUDENT {
    char name[100];
    int roll_no;
    char branch[100];
    float CGPA;
};

int main() {
    struct STUDENT students[5];
    float highestCGPA = 0;
    int highestCGPAIndex = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Branch: ");
        scanf("%s", students[i].branch);

        printf("CGPA: ");
        scanf("%f", &students[i].CGPA);

        printf("\n");

        if (students[i].CGPA > highestCGPA) {
            highestCGPA = students[i].CGPA;
            highestCGPAIndex = i;
        }
    }

    printf("Details of the student with the highest CGPA:\n");
    printf("Name: %s\n", students[highestCGPAIndex].name);
    printf("Roll No: %d\n", students[highestCGPAIndex].roll_no);
    printf("Branch: %s\n", students[highestCGPAIndex].branch);
    printf("CGPA: %.2f\n", students[highestCGPAIndex].CGPA);

    return 0;
}*/

// 5 - WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary.Enter the details of 5 employees.Display the details of those employees whose salary is greater than the average salary value of all employees

/*#include <stdio.h>

struct EMPLOYEE {
    char name[100];
    int empid;
    char department[100];
    int age;
    float salary;
};

int main() {
    struct EMPLOYEE employees[5];
    float totalSalary = 0;
    float averageSalary;

    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].empid);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");

        totalSalary += employees[i].salary;
    }

    averageSalary = totalSalary / 5;

    printf("Employees with salary greater than average:\n");
    for (int i = 0; i < 5; i++) {
        if (employees[i].salary > averageSalary) {
            printf("Employee %d:\n", i + 1);
            printf("Name: %s\n", employees[i].name);
            printf("Employee ID: %d\n", employees[i].empid);
            printf("Department: %s\n", employees[i].department);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
        }
    }

    return 0;
}*/

// 6 - WAP to define a structure COMPLEX having members as real, and imag. Define a user-defined function ADDCOMPLEX() which will receive two structure variables as its arguments and will return a structure variable.The ADDCOMPLEX() will add two complex numbers.

/*#include <stdio.h>

struct COMPLEX {
    float real;
    float imag;
};

struct COMPLEX ADDCOMPLEX(struct COMPLEX c1, struct COMPLEX c2) {
    struct COMPLEX result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main() {
    struct COMPLEX num1, num2, sum;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = ADDCOMPLEX(num1, num2);

    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}*/

// 7 - WAP to define a structure DISTANCE having members as kms, and metres. Define a user defined function ADDDISTANCE () which will receive two structure variables as its arguments and will return a structure variable.The ADDDISTANCE() will add two distance values.

/*#include <stdio.h>

struct DISTANCE {
    int kms;
    int metres;
};

struct DISTANCE ADDDISTANCE(struct DISTANCE d1, struct DISTANCE d2) {
    struct DISTANCE result;

    result.kms = d1.kms + d2.kms;
    result.metres = d1.metres + d2.metres;

    if (result.metres >= 1000) {
        result.kms += result.metres / 1000;
        result.metres = result.metres % 1000;
    }

    return result;
}

int main() {
    struct DISTANCE distance1, distance2, sum;

    printf("Enter the distance in kilometers and meters for the first distance:\n");
    scanf("%d %d", &distance1.kms, &distance1.metres);

    printf("Enter the distance in kilometers and meters for the second distance:\n");
    scanf("%d %d", &distance2.kms, &distance2.metres);

    sum = ADDDISTANCE(distance1, distance2);

    printf("Sum of the distances: %d kms %d metres\n", sum.kms, sum.metres);

    return 0;
}*/

// 8- WAP to define a structure TIME having members as hour, minute, and second. Define a user defined function ADDTIME () which will receive two structure variables as its arguments and will return a structure variable.The ADDTIME() will add two different time values.

/*#include <stdio.h>

struct TIME
{
    int hour;
    int minute;
    int second;
};

struct TIME ADDTIME(struct TIME t1, struct TIME t2)
{
    struct TIME result;

    result.hour = t1.hour + t2.hour;
    result.minute = t1.minute + t2.minute;
    result.second = t1.second + t2.second;

    if (result.second >= 60)
    {
        result.minute += result.second / 60;
        result.second = result.second % 60;
    }

    if (result.minute >= 60)
    {
        result.hour += result.minute / 60;
        result.minute = result.minute % 60;
    }

    return result;
}

int
main()
{
    struct TIME time1, time2, sum;

    printf("Enter the first time (hour minute second): ");
    scanf("%d %d %d", &time1.hour, &time1.minute, &time1.second);

    printf("Enter the second time (hour minute second): ");
    scanf("%d %d %d", &time2.hour, &time2.minute, &time2.second);

    sum = ADDTIME(time1, time2);

    printf("Sum of the times: %d hours %d minutes %d seconds\n", sum.hour, sum.minute, sum.second);

    return 0;
}*/
