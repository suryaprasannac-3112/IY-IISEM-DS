#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *link;
};
struct stack *top=NULL,*p,*temp,*temp1;
void push() {
    int ele;
    printf("\nEnter element: ");
    scanf("%d", &ele);
    p = (struct stack *)malloc(sizeof(struct stack));
    p->data = ele;
    p->link = top; 
    top = p;       
}
void pop() {
    if (top == NULL) {
        printf("\nThere are no elements to pop");
    } else {
        struct stack *temp = top; 
        printf("\nDeleted element is %d", top->data);
        top = top->link;
        free(temp); 
    }
}
void display() {
    struct stack *temp = top;
    if (temp == NULL) {
        printf("\nThere are no elements in the stack");
    } else {
        printf("\nStack elements are: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
int main(){
	int ch;
	while(1)
{
		printf("\n\tstack operations are:");
		printf("\n\t 1. push");
		printf("\n\t 2. pop");
		printf("\n\t 3. display");
		printf("\n\t 4. exit");
		printf("\n\tenter your choice....");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :  push();
			break;
			case 2 :  pop();
			break;
			case 3 :  display();
			break;
			case 4 :  exit(0);
			break;
			default : printf("\n invalid choice,try again");
		}
	}
	return 0;
}
