/*#include <stdio.h>
#include <math.h>
struct POINT
{
	int Xco, Yco;
};

int main()
{
	struct POINT p1, p2;
	printf("Enter coordinates of point 1: ");
	scanf("%d%d", &p1.Xco, &p1.Yco);
	printf("Enter coordinates of point 2: ");
	scanf("%d%d", &p2.Xco, &p2.Yco);
	float dist = sqrt(pow((p2.Xco - p1.Xco), 2) + pow((p2.Yco - p1.Yco), 2));
	printf("The distance between the points is %f\n", dist);
	return 0;
}*/

// 2 - 2. WAP to define a structure DISTANCE having members as kms, and metres. Define a user-defined function ADDDISTANCE () which will receive two structure variables as its arguments and will return a structure variable.

/*#include <stdio.h>
struct DISTANCE add(struct DISTANCE , struct DISTANCE);
struct DISTANCE
{
	int km,m;
};
int main()
{
	struct DISTANCE d1,d2,d3;
	printf("Enter dist 1 in km and metre: ");
	scanf("%d%d",&d1.km, &d1.m);
	printf("Enter dist 2 in km and metre: ");
	scanf("%d%d",&d2.km, &d2.m);
	d3 = add(d1,d2);
	printf("Km  = %d and metre = %d\n",d3.km,d3.m);
	return 0;
}
struct DISTANCE add(struct DISTANCE d1, struct DISTANCE d2)
{
	struct DISTANCE d3;
	d3.km = (d1.km + d2.km) + (d1.m + d2.m)/1000;
	d3.m = (d1.m + d2.m)%1000;
	return d3;
}*/

// 3 - 3. WAP to define a structure with one integer variable. Write a swap function to interchange the value of 2 structure variables.

/*#include <stdio.h>

struct INT
{
	int a;
};
void swap(struct INT *, struct INT *);
int main()
{
	struct INT x,y,res;
	printf("Enter 1st integer: ");
	scanf("%d",&x.a);
	printf("Enter 2nd integer: ");
	scanf("%d",&y.a);
	swap(&x,&y);
	printf("%d is X and %d is Y",x.a,y.a);
	return 0;
}

void swap(struct INT *x, struct INT *y)
{
	struct INT temp;
	temp.a = x->a;
	x->a = y->a;
	y->a = temp.a;
}*/

// 4 - 4. WAP to define a structure STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students. Display the details of the student having the highest CGPA.

/*#include <stdio.h>
struct STUDENT
{
	char name[20];
	int roll_no;
	char branch[10];
	float cgpa;
};
int main()
{
	struct STUDENT s[3];
	int i;
	printf("Enter details in the format\n Name \n Roll_no \n Branch \n CGPA \n");
	for (i = 0; i < 3; i++)
	{
		printf("Enter details of student %d: ", i + 1);
		scanf("%s%d%s%f", s[i].name, &s[i].roll_no, s[i].branch, &s[i].cgpa);
	}
	int max = s[0].cgpa;
	int val;
	for (i = 0; i < 3; i++)
	{
		if (max < s[i].cgpa)
		{
			max = s[i].cgpa;
			val = i;
		}
	}
	printf("Name is %s\n", s[val].name);
	printf("Roll No =  %d\n", s[val].roll_no);
	printf("Branch is %s\n", s[val].branch);
	printf("CGPA is %f\n", s[val].cgpa);
	return 0;
}*/

// 5 - 5. WAP to allocate memory dynamically for an integer array of size 10. Enter the array elements and display their sum.

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr, n, i, sum = 0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed");
		exit(1);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("Enter element %d: ", i + 1);
			scanf("%d", &arr[i]);
		}
		for (i = 0; i < n; i++)
			sum = sum + arr[i];
		printf("Sum is %d\n", sum);
	}
	return 0;
}*/

// 6 - 6. WAP to allocate memory dynamically for an array. Find out the largest and smallest element of the array

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr,n,i,sum = 0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	arr = (int *) malloc (n * sizeof(int));
	if( arr == NULL)
	{
		printf("Memory allocation failed");
		exit(1);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("Enter element %d: ",i+1);
			scanf("%d",&arr[i]);
		}

		int max = arr[0], min = arr[0];
		for(i=0;i<n;i++)
		{
			if(max < arr[i])
			{
				max = arr[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];
			}
		}
		printf("Largest  = %d , Smallest = %d\n",max,min);
	}
	return 0;
}*/

// 7 - Linear Search using dynamic memeory allocation

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr,n,i,flag = 0;
	printf("Enter size: ");
	scanf("%d",&n);
	arr = (int *) malloc (n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memort allocation failed");
		exit(1);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("Enter element %d: ",i+1);
			scanf("%d",&arr[i]);
		}
		int val,pos;
		printf("Enter value you want to search: ");
		scanf("%d",&val);
		for(i=0;i<n;i++)
		{
			if(arr[i] == val)
			{
				flag++;
				break;
				pos = i;
			}
		}
		if(flag == 1)
			printf("value found at %d\n",pos);
		else
			printf("value not found");
	}
	return 0;
}*/