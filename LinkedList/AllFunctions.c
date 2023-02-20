#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void addNodeatEnd(struct node *head, int value){
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = temp;
}

void numberOfNodes(struct node *head){
    struct node *ptr = head;
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr -> next;
    }
    printf("The number of nodes in the linked list is %d\n",count);
}

void viewData(struct node *head){
    struct node *ptr = head;
     while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
     }
}




void main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> next = NULL;

    addNodeatEnd(head, 22);
    addNodeatEnd(head, 32);
    addNodeatEnd(head, 412);
    addNodeatEnd(head, 5241);
    addNodeatEnd(head, 21);
    addNodeatEnd(head, 13);
    addNodeatEnd(head, 12);
    addNodeatEnd(head, 5431);
    addNodeatEnd(head, 513);
    addNodeatEnd(head, 51);
    addNodeatEnd(head, 41);
    addNodeatEnd(head, 141);
    addNodeatEnd(head, 51);
    numberOfNodes(head);
    viewData(head);

    

}