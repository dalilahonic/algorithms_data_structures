#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


// Dvostruko ulancane liste / doubly linked list

// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// struct Node* head; //  pointer to head node.

// //Creates a new Node and returns pointer to it.
// struct Node* GetNewNode(int x) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

//     newNode -> data = x;
//     newNode -> prev = NULL;
//     newNode -> next = NULL;

//     return newNode;
// }

// void InsertAtHead(int x) {
//     struct Node* newNode = GetNewNode(x);

//     if(head == NULL) {
//         head = newNode;
//         return;
//     }

//     head -> prev = newNode;
//     newNode -> next = head;
//     head = newNode;
// }

// void InsertAtTail(int x) {

//     struct Node* temp = head;
//     struct Node* newNode = GetNewNode(x);

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     while(temp -> next != NULL) {
//         temp = temp -> next;
//     }

//     temp -> next = newNode;
//     newNode -> prev = temp;
// }

// void Print() {
//     struct Node *temp = head;

//     printf("Forward: ");

//     while(temp != NULL) {
//         printf("%d \n", temp -> data);
//         temp = temp -> next;
//     }
// }

// void ReversePrint() {
//     struct Node *temp = head;
    
//     if(temp == NULL) return;

//     while(temp -> next != NULL) {
//         temp = temp -> next;
//     }

//     printf("Reverse: ");

//     while(temp != NULL) {
//         printf("%d \n", temp -> data);
//         temp = temp -> prev;
//     }
// }

// int main() {

// 	head = NULL; // empty list. set head as NULL. 
	
// 	InsertAtTail(2); Print(); ReversePrint();
// 	InsertAtTail(4); Print(); ReversePrint();
// 	InsertAtHead(6); Print(); ReversePrint();
// 	InsertAtTail(8); Print(); ReversePrint();
	
// }

//........................................................................
 
// Kruzno povezana lista / circular linked list

// typedef struct Node {
//     int info;
//     struct Node *next;
// } node;

// node *front = NULL, *rear = NULL, *temp;

// void create() {
//     node *newNode;

//     newNode = (node*)malloc(sizeof(node));

//     printf("\n Eneter the node value: ");

//     scanf("%d", &newNode -> info);
//     newNode -> next = NULL;

//     if(rear == NULL) front = rear = newNode;
//     else {
//         rear -> next = newNode;
//         rear = newNode;
//     }

//     rear -> next = front;
// }

// void del() {
//     temp = front;
//     if (front == NULL) printf("\n Underflow: ");
//     else {
//         if(front == rear) {
//             printf("\n %d", front -> info);
//             front = rear = NULL;
//         } else { 
//             printf("\n %d", front -> info);
//             front = front -> next;
//             rear -> next = front;
//         }

//         temp -> next = NULL;
//         free(temp);
//     }
// } 

// void display() {
//     temp = front;

//     if(front == NULL) printf("Empty");
//     else {
//         printf("\n");

//         for(;rear != temp; temp = temp -> next) {
//             printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);

//         }
//         printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
//     }
// }

// int main() {
//     int chc;

//     do {
//     printf("\nMenu\n\t 1 to create the element : ");
//     printf("\n\t 2 to delete the element : ");
//     printf("\n\t 3 to display the list : ");
//     printf("\n\t 4 to exit from main : ");
//     printf("\nEnter your choice : ");
//     scanf("%d",&chc);
    
//         switch(chc) {
//             case 1:
//                 create();
//                 break;
         
//             case 2:
//                 del();
//                 break;
     
//             case 3:
//                 display();
//                 break;
     
//             case 4:
//                 return 1;
             
//             default:
//                 printf("\nInvalid choice :");
//         }
//     } while(1);
 
//     return 0;
// }

//....................................................................

// ZADACI

// typedef struct node {
//     int data;
//     struct node *next;
//     struct node *prev;
// } node;

// node *first, *last;

// void insertAtTail(int x) {
//     node *temp = (node*)malloc(sizeof(node));
    
//     temp -> data = x;
    
//     if(first == NULL) {
//         temp -> next = NULL;
//         temp -> prev = NULL;
//         first = temp;
//         last = temp;
//     } else {
//         last -> next = temp;
//         temp -> prev = last;
//         temp -> next = NULL;
//         last = temp;
//     }
// }

// void insertAtHead(int x) {
//     node *temp = (node*)malloc(sizeof(node));
    
//     temp -> data = x;
    
//     if(first == NULL) {
//         first = temp;
//         last = temp;
//     } else {
//         first -> prev = temp;
//         temp -> next = first;
//         first = temp;
//     }
// }

// void display() {
//     node *temp = (node*)malloc(sizeof(node));
    
//     for(temp = first; temp != NULL; temp = temp -> next) {
//         printf("%d ", temp -> data);
//     }
    
//     printf("\n");
//     free(temp);
// }

// void deleteAtTail() {
//     node *t = last;
//     last = last -> prev;
//     last -> next = NULL;
//     t -> prev = NULL;
//     free(t);
// }

// void deleteAtHead() {
//     node *t = (node*)malloc(sizeof(node));
    
//     t = first;
//     first = first -> next;
//     t -> next = NULL;
//     free(t);
// }

// void deleteBefore(node *p) {
    
//     if(p -> prev == NULL || p == NULL) return;
    
//     node *t = p -> prev;
    
//     if(t == first) {
//         t -> next = NULL;
//         p -> prev = NULL;
//         first = p;
//     } else {
//         p -> prev = t-> prev;
//         t -> prev -> next = p;
//         t -> next = NULL;
//         t -> prev = NULL;
//     }
    
//     free(t);
        
//     }
    

// void deleteAfter(node *p) {
    
//     if (p == NULL || p->next == NULL) return;
    
//     node *t = p -> next;
    
//     if(t == last) {
//         t -> prev =NULL;
//         p -> next = NULL;
//         last = p;
        
//     } else {
//         p -> next = t -> next;
//         t -> next -> prev = p;
//         t -> next =NULL;
//         t -> prev = NULL;
//     }
//         free(t);
        
//     }


// int main() {
//     insertAtTail(1);
//     insertAtTail(2);
//     insertAtTail(3);
//     insertAtHead(5);
//     display();
//     deleteAtHead();
//     display();
//     deleteAtTail();
//     display();
//     insertAtTail(26);
//     insertAtTail(12);

//     display();
//     deleteBefore(last);
//     display();
//     deleteAfter(first -> next);
//     display();
//     deleteBefore(last);
//     display();
    
//     insertAtTail(22);
//     insertAtTail(33);
//     insertAtTail(44);
//     display();
//     deleteBefore(last -> prev);
//     display();
    
//     return 0;
// }

//................................................................

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *first, *last;

// void display() {
//     node *temp = first;
    
    
//    do {
//         printf("%d %p   ", temp->data, temp->next);
//         temp = temp->next;
//     } while(temp != first && temp != NULL);
    
//     printf("\n");
//     printf("first: %x\n", first);
   
// }

// // insert in singly linked list, not circular
// void insert(int x) {
//     node *temp = (node*)malloc(sizeof(node));
//     temp -> data = x;
//     temp -> next = NULL;
    
//     if(first ==NULL) {
//         first = temp;
//         last = temp;
//     } else {
    
//     last -> next = temp;
//     last = temp;
//     }
    
// }

// void turnToCircular() {
//     node *temp = (node*)malloc(sizeof(node));
    
//     for(temp = first; temp -> next != NULL; temp = temp -> next);
    
//     temp -> next = first;
    

// }

// void breakCircularList() {
    
//     node *temp = first;
    
//     for(; temp -> next != first; temp = temp -> next);
    
//     temp -> next = NULL;
    
// }

// int main() {
//     insert(1);
//     insert(2);
//     insert(3);
//     display();
//     turnToCircular();
//     display();
//     breakCircularList();
//     display();
    
// }


//............................................................................

// typedef struct node {
//     int data;
//     struct node *next;
//     struct node *prev;
// } node;

// node *first, *last;

// struct node* GetNewNode(int x) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));

//     newNode -> data = x;
//     newNode -> prev = NULL;
//     newNode -> next = NULL;

//     return newNode;
// }

// void InsertAtTail(int x) {

//     struct node* temp = first;
//     struct node* newNode = GetNewNode(x);

//     if (first == NULL) {
//         first = newNode;
//         return;
//     }

//     while(temp -> next != NULL) {
//         temp = temp -> next;
//     }

//     temp -> next = newNode;
//     newNode -> prev = temp;
// }

// void Print() {
//     struct node *temp = first;

//     while(temp != NULL) {
//         printf("%d \n", temp -> data);
//         temp = temp -> next;
//     }
//     printf("\n");
// }

// void insertAfter(node *p, int x) {
    
//     struct node *newNode = GetNewNode(x);
    
//     if(p == last) {
//         p -> next = newNode;
//         newNode -> prev = p;
//         last= newNode;
//     } else {
//     newNode -> prev = p;
//     newNode -> next = p -> next;
//     p -> next -> prev = newNode;
//     p -> next = newNode;
//     }

// }

// void insertBefore(node *p, int x) {
    
//     struct node *newNode = GetNewNode(x);
    
//     if(p == first) {
        
//         p -> prev = newNode;
//         newNode -> next = p;
//         first = newNode;
        
//     } else {
//         newNode -> next = p;
//         newNode -> prev = p -> prev;
//         newNode -> prev -> next = newNode;
//         p -> prev = newNode;
//     }
        
    
// }
    

// int main() {
    
//     InsertAtTail(1);
//     InsertAtTail(2);
//     InsertAtTail(3);
//     Print();
//     insertAfter(first, 12);
//     Print();
//     insertAfter(first -> next, 23);
//     Print();
//     insertBefore(first, 17);
//     Print();
//     insertBefore(first -> next, 99);
//     Print();
// }