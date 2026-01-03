#include<stdio.h>
#include<stdlib.h>
 //Doubly linked list and its operations
//representation of node of CLL
struct Node{
    int data; //value
    struct Node*next; //address of the next node
    struct Node*prev; //address of the previous node
};

// Create node of DLL
struct Node* DLLNode(int data){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
} 

//Operations on DLL

//Insert at beginning:

struct Node*ADDbeg(int data, struct NODE*head){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->next=NULL;
    newNode->data=data;
    newNode->prev=NULL;
    //if list is empty
    if(head==NULL){
        return newNode;
    }

    newNode->next=head;
    head->prev=newNode;
    return newNode;
}

//Insert at the end

struct Node*addatEnd(int data, struct Node*head){
    struct Node*newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->next=NULL;
    newNode->data=data;
    newNode->prev=NULL;
    //check if list is empty
    if(head==NULL){
        return newNode;
    }

    // create a temp node for traversing to the end of the list
    struct Node*temp=head;
    //traversing
    while(temp->next!=NULL){
        temp=temp->next;
 
    }
    //adding newnode at the end of the list

    temp->next=newNode;
    newNode->prev=temp;

    return head;
}

//Delete at Beginning:

struct Node*deletBeg(struct Node*head){
    //if list is empty
    if(head==NULL){
        return NULL;
    }

    //if only one node
    if(head->next==NULL{
        free(head);
        return NULL;
    }

    //more than one node
    struct Node*temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);

    return head;
}

//Delete at the end 
struct Node*DELatEND(struct Node*head){
    //check list empty 
    if(head==NULL){
        return NULL;
    }

    //only one node
    if(head->next==NULL){
        free(head);
        return NULL;
    }

    //more than one node hence we have to traverse to the very end of the linked list
    struct Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //delete the last node
    temp->prev->next=NULL;
    free(head)

    return head;
}

//Traverse
void traverse(struct Node*head){
    struct Node*temp=head;
    while(temp->next!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

// Reverse Traversal

void revTRAVERSAL(struct Node*head){
    //if list empty
    if(head==NULL){
        return;
    }
    struct Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //backwards
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->prev;
    }


}

