#include <stdio.h>
int stack[100], n, top = -1, ch;
void push();
void pop();
void display();
void main() {
    printf("Enter size of stack: ");
    scanf("%d", &n);
    printf("Stack operations: 1. Push  2. Pop  3. Display  4. Exit\n");
   do {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exiting stack operations.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 4);
}

// Function to push an element into the stack
void push() {
    int x;
    if (top == n - 1) {
        printf("Stack is full\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
        printf("Element inserted\n");
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Deleted element is: %d\n", stack[top]);
        top--;
    }
}

// Function to display the stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
