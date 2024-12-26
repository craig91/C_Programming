#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX 5

typedef struct {
    int items[MAX];
    int top;
} Stack;

void initialize(Stack *stack) { // this function access the int top member of the stack struct using the arrow operator
    stack->top = -1; // accesses the stack struct and gives the value -1 to the top variable.
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX -1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) { 
        printf("Stack Overflow! Cannot push %d.\n", value);
    } else {
        stack->items[++stack->top] = value;
        printf("%d pushed onto the stack.\n",value);
    }
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    } else {
        return stack->items[stack->top--];
    }
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No top element.\n");
        return -1;
    } else {
        return stack->items[stack->top];
    }
}

void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents... ");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d ",stack->items[i]);
        }
        printf("\n");
    }
}

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    display(&myStack);

    printf("Top element is: %d\n", peek(&myStack));

    printf("Popped element: %d\n", pop(&myStack));
    display(&myStack);

    push(&myStack, 40);
    push(&myStack, 50);
    push(&myStack, 60);
    display(&myStack);
    return 0;
}


