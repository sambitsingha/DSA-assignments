// 1 -> To find the largest bewteen two numbers

/*#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers :" );
	scanf("%d%d",&a,&b);
	if(a >b)
		printf("%d is larger than %d",a,b);
	else
		printf("%d is larger than %d",b,a);
	return 0;
}*/

// 3 -> To enter a character and check whether it is vowel or not

/*#include<stdio.h>
int main()
{
	char ch;

	printf("Enter a character: ");
	scanf("%c",&ch);

	if(ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("\nIt is a vowel\n");
	else
		printf("\nIt is a consonant\n");
	return 0;
}*/

// 4 -> Change the Upper to Lower Case or Vice versa

/*#include<stdio.h>
int main()
{
	char ch;

	printf("Enter a character: ");
	scanf("%c",&ch);

	if( (int)ch >= 65 && (int)ch <=90)
	{
		ch = (int)ch + 32;
		printf("%c\n",ch);
	}
	else if( (int)ch >=97 && (int)ch <=122)
	{
		ch = (int)ch - 32;
		printf("%c\n",ch);
	}

	return 0;
}*/

// 5 -> Check whether a year is Leap or Not

/*#include <stdio.h>
int main()
{
	int year;

	printf("Enter a year: ");
	scanf("%d",&year);

	if (year % 4 == 0 || year % 40 == 0 || year % 400 == 0)
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);

	return 0;
}*/

// 6 -> check whether the inputted number is larger or smaller than the 2nd number using nested if else

/*#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	if(a<=b)
	{
		if(a<b)
			printf("\n%d is smaller than %d\n",a,b);
		else
			printf("\n%d is equal to %d\n",a,b);
	}
	else
		printf("%d is larger than %d\n",a,b);
	return 0;
}*/

// 8 -> Enter marks and calculate the grade of a student

/*#include <stdio.h>
int main()
{
	int mark1 ,mark2 , mark3;
	float avg;
	printf("Enter the marks of three subjects: ");
	scanf("%d%d%d",&mark1,&mark2,&mark3);

	avg = (mark1 + mark2 + mark3)/3;

	if (avg>=90 && avg<=100)
		printf("\n O grade\n");
	else if (avg>=80 && avg<90)
		printf("\n E grade\n");
	else if (avg>=70 && avg<80)
		printf("\n A grade\n");
	else if (avg>=60 && avg < 70)
		printf("\n B grade\n");
	else if (avg>=50 && avg < 60)
		printf("\n C grade\n");
	else if (avg>=40 && avg <50)
		printf("\n B grade\n");
	else if (avg<40)
		printf("\n F grade\n");
	else
		printf("\n Invalid Input");
	return 0;
}*/

// 9 -> WAP to check the smallest between 3 numbers

/*#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);

	//Let C be considered smallest initially

	if (c<a && c<b)
		printf("%d is smallest\n",c);
	else if (a<b && a<c)
		printf("\n %d is smallest\n",a);

	else
		printf("%d is smallest",b);
	return 0;
}*/

// 10 -> Calculation of Income Tax

/*#include <stdio.h>
int main()
{
	long int income;
	double tax;

	printf("Enter your income: ");
	scanf("%ld", &income);
	if (income <= 150000)
		printf("\nNo tax\n");
	else if (income > 150000 && income <= 300000)
	{
		tax = (10 * income) / 100;
		printf("\n%lf is your tax", tax);
	}
	else if (income > 300000 && income <= 500000)
	{
		tax = (20 * income) / 100;
		printf("\n%lf is your tax\n", tax);
	}
	else
	{
		tax = (30 * income) / 100;
		printf("\n%lf is your tax\n", tax);
	}
	return 0;
}*/

// 11 -> Calculation of electric Bill

/*#include <stdio.h>
int main()
{
	system("cls");
	int previousMonth, currentMonth, unit;
	float amount;
	printf("Enter previous month reading: ");
	scanf("%d", &previousMonth);
	printf("Enter Current Month Reading : ");
	scanf("%d", &currentMonth);
	unit = currentMonth - previousMonth;
	if (unit <= 100)
	{
		amount = unit * 3.20;
		printf("\nThe Electric Bill amount is %.3f\n", amount);
	}
	else if (unit <= 200)
	{
		amount = unit * 5.40;
		printf("\nThe Electric Bill amount is %.3f", amount);
	}
	else
	{
		amount = unit * 6;
		printf("\nThe Electric Bill amount is %.3f", amount);
	}
	return 0;
}*/

// 12 -> Enter the three sides of a triangle. WAP to check whether those sides form a valid triangle or not (triangle is valid if sum of the two sides is greater than the largest of the three sides)

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

// 13 -> WAP to calculate the roots of a quadratic equation.

/*#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	double discriminant, root1, root2;

	printf("Enter the coefficients (a, b, and c) of the quadratic equation:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	discriminant = b * b - 4 * a * c;
	if (discriminant > 0)
	{
		// Two distinct real roots
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
	}
	else if (discriminant == 0)
	{
		// One real root (repeated)
		root1 = -b / (2 * a);
		printf("Root 1 = Root 2 = %.2lf\n", root1);
	}
	else
	{
		// Complex roots
		double realPart = -b / (2 * a);
		double imaginaryPart = sqrt(-discriminant) / (2 * a);
		printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
	}

	return 0;
}*/

// 14 -> Even Odd using SWITCH- CASE

/*#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	switch(num%2)
	{
		case 0: printf("\n%d is even",num);
			break;
		case 1: printf("\n%d is odd",num);
			break;
	}
	return 0;
}*/

// 15 -> Vowel check using SWITCH CASE

/*#include <stdio.h>
int main()
{
	char letter;
	printf("Enter an alphabet: ");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':
		case 'A':
		case 'e':
		case'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': printf("\n%c is an vowel\n",letter);
			  break;
		default: printf("\n%c is a consonant\n",letter);
	}
	return 0;
}*/

// 16 -> Show weekdays using SWITCH CASE

/*#include <stdio.h>
int main()
{
	int ch;
	printf("Enter a number: ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		printf("\nMonday");
		break;
	case 2:
		printf("\nTuesday");
		break;
	case 3:
		printf("\nWednesday");
		break;
	case 4:
		printf("\nThrusday");
		break;
	case 5:
		printf("\nFriday");
		break;
	case 6:
		printf("\nSaturday");
		break;
	case 7:
		printf("\n Sunday");
		break;
	default:
		printf("\nInvalid Input");
	}

	return 0;
}*/

// 17 -->  WAP to enter the marks of a student in three different subjects. Calculate the grade of the student as per the following rules using switch statement.

/*#include <stdio.h>
int main()
{
	int marks1, marks2, marks3, avg;
	printf("Enter the three subjects marks : ");
	scanf("%d%d%d", &marks1, &marks2, &marks3);
	avg = (marks1 + marks2 + marks3) / 3;
	switch (avg / 10)
	{
	case 10:
	case 9:
		printf("O grade");
		break;
	case 8:
		printf("E grade");
		break;
	case 7:
		printf("A grade");
		break;
	case 6:
		printf("B grade");
		break;
	case 5:
		printf("C grade");
		break;
	default:
		printf("F grade");
	}
	return 0;
}*/