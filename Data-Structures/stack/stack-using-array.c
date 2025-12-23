#include <stdio.h>
#include <stdlib.h>

// Stack implementation using array (LIFO)
#define MAX 100

int STACK[MAX];
int top = -1;

// PUSH
void push(int value){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    STACK[top] = value;
}

// POP
void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    top--;
}

// PEEK
int peek(){
    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    return STACK[top];
}

// DISPLAY
void show(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    for(int i = top; i >= 0; i--){
        printf("%d ", STACK[i]);
    }
    printf("\n");
}

int main(){
    push(4);
    push(2);
    push(1);
    pop();
    show();

    int value = peek();
    if(value != -1)
        printf("Top element is %d\n", value);

    return 0;
}
