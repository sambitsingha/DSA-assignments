// 1.Write a menu-driven program to perform the Insert, Delete, and Traverse operations on a Queue implemented using an array.

/*#include <stdio.h>
#include <stdlib.h>
void qinsert();
void qdelete();
void qdisplay();
int q[20], front = -1, rear = -1, max_size = 5;

void main()
{
	int ch;
	while (1)
	{
		printf("\n1. Queue Insert");
		printf("\n2. Queue delete");
		printf("\n3. Queue display");
		printf("\n4. Exit");
		printf("\nEnter choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			qinsert();
			break;
		case 2:
			qdelete();
			break;
		case 3:
			qdisplay();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nInvalid choice");
		}
	}
}

void qinsert()
{
	int item;
	if (rear == max_size - 1)
		printf("\nQueue overflow");
	else
	{
		printf("\nEnter value to be inserted: ");
		scanf("%d", &item);
		if (front == -1)
		{
			front = 0;
			rear = 0;
		}
		else
			rear++;
		q[rear] = item;
	}
}
void qdelete()
{
	int item;
	if (front == -1)
		printf("Queue underflow");
	else
	{
		item = q[front];
		printf("\nValue delete = %d", item);
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;
	}
}
void qdisplay()
{
	int i;
	if (front == -1)
		printf("\nNo elements in Queue");
	else
	{
		for (i = front; i <= rear; i++)
			printf("%d\t", q[i]);
	}
}*/

// 2 -  Program to write Circular Queue

/*#include <stdio.h>
#include <stdlib.h>
void cqinsert();
void cqdelete();
void cqdisplay();
int cq[20], front = -1, rear = -1, max_size = 5;
void main()
{
	int ch;
	while (1)
	{
		printf("\n1. Circular Queue Insert");
		printf("\n2. Circular Queue delete");
		printf("\n3. Circular Queue display");
		printf("\n4. Exit");
		printf("\nEnter choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			cqinsert();
			break;
		case 2:
			cqdelete();
			break;
		case 3:
			cqdisplay();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nInvalid choice");
		}
	}
}

void cqinsert()
{
	int item;
	if ((front == 0 && rear == max_size - 1) || (front == rear + 1))
		printf("\nQueue overflow");
	else
	{
		printf("\nEnter value to be inserted: ");
		scanf("%d", &item);
		if (front == -1)
		{
			front = 0;
			rear = 0;
		}
		else if (rear == max_size - 1)
			rear = 0;
		else
			rear++;
		cq[rear] = item;
	}
}

void cqdelete()
{
	int item;
	if (front == -1)
		printf("Queue underflow");
	else
	{
		item = cq[front];
		printf("\nValue delete = %d", item);
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else if (front == max_size - 1)
			front = 0;
		else
			front++;
	}
}

void cqdisplay()
{
	int i;
	if (front == -1)
		printf("\nNo elements in Queue");
	else
	{
		if (front <= rear)
		{
			for (i = front; i <= rear; i++)
				printf("%d\t", cq[i]);
		}
		else
		{
			for (i = front; i <= max_size - 1; i++)
				printf("%d\t", cq[i]);
			for (i = 0; i <= rear; i++)
				printf("%d\t", cq[i]);
		}
	}
}*/