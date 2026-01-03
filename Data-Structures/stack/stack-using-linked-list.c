#include <stdio.h>
#include <stdlib.h>

//Node structure

struct Node{
    int data;
    struct Node*next;
};
struct Node*top=NULL; //stack top

//Push
void push(int val){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    
    if(newNode==NULL){
        printf("Stack Overflow\n");
        return;
    }
    newNode->data=val;
    newNode->next=top;
    top=newNode;
}

//POP
void pop(){
    if(top==NULL){
        printf("Stack Underflow\n");
        return;
    }
    
    struct Node*temp=top;
    printf("Popped element is %d",top->data);
    top=top->next;
    free(temp);
}

//peek

void peek(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    printf("Top element of the stack : %d",top->data);
}

//Display

void display(){
    if(top==NULL){
        printf("stack is empty");
    }
    //traverse
    struct Node*temp=top;
    while(temp->next!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}
