#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;

}

struct Node*createNode(int value){
    struct Node*newNode = (struct Node*)malloc((sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//insert at beginning
struct Node*addtobeg(int data, struct Node*head){
    //Step 1 -- Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    //step 2 -- enter data into the new Node
    newNode->data= data;
    //Step3 -- point to the head
    newNode-->next = head;
    //step4-- return newly created node
    return newNode
}

//Insert at End
struct Node*addATend(int data, struct Node*head){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;

    //if the linked list is empty
    if(head==NULL){
        return newNode;
    }

    //traverse
    struct Node*temp=head;
    while(temp->next !=NULL){
        temp = temp->next;
    }

    //link the newNode to the last node of the linked list

    temp->next=newNode;

    return newNode;
}

//Insert at a specific location

struct Node*addSP(int data, struct Node*head, int position){
    //creating a new node
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;


//special cose if the desired postion is 1(first one)
if(position==1){
    newNode->next=head;
    return newNode;
}
struct Node*temp = head;
//traverse to the 1 position behind the desire position of the insertion
for(int i = 1; i<position-1 && temp!=NULL; i++){
    temp = temp->next;
}

//invalid postion
if(temp==NULL){
    printf("INVALID POSITION");
    free(newNode); //frees up the memory allocated by the malloc function
    return head;
}

//insert in  the position
newNode->next = temp->next;
temp->next = newNode;

return head;
}