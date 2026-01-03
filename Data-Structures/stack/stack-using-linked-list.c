#include <stdio.h>
#include <stdlib.h>

// Stack implementation using linked list

struct stack {
    int data;
    struct stack* next;
};

// create node
struct stack* createNode(int data) {
    struct stack* newNode = (struct stack*)malloc(sizeof(struct stack));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// PUSH
struct stack* push(struct stack* top, int data) {
    struct stack* newNode = createNode(data);
    if (top == NULL) {
        printf("stack Overflow\n");
        return top;
    }
    newNode->next = top;
    return newNode;
}

// POP
struct stack* pop(struct stack* top) {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return NULL;
    }
    struct stack* temp = top;
    top = top->next;
    free(temp);
    return top;
}

// PEEK
int peek(struct stack* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// DISPLAY
void display(struct stack* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct stack* top = NULL;

    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 15);

    display(top);

    printf("Top element: %d\n", peek(top));

    top = pop(top);
    display(top);

    return 0;
}


