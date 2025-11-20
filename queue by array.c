#include<stdio.h>
#include<stdlib.h>
int Queue[100],n,i,front=-1,rear=-1,x,ch;
void insert();
void delete();
void display();
void main()
{

	printf("Enter queue size:");
	scanf("%d",&n);
	printf("Queue operation: 1.insert 2.delete 3.Display 4. Exit");
	while(1)
	{
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			case 4: printf("Exit from queue:");exit(0);
			default: printf("\n INVAILD CHOICE,try again");
		}
	}
}
void insert()
{
	if(rear==n-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		
		rear++;
		printf("Enter queue elements ");
		scanf("%d",&x);
		Queue[rear]=x;
		printf("element inserted");
}
}
void delete()
{
	if(front==rear)
	printf("queue is empty");
else
{
	front++;
	printf("delete data element is = %d",Queue[front]);
}
}
void display()
{
	if(front==rear)
	printf("Queue is empty");
	else{
		printf("Queue elements are :\n");
		for(i=front + 1;i<=rear;i++)
		{
			printf("%d",Queue[i]);
		}
	}
}
