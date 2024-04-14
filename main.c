#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


    // strukture

// int main() {

    // struct  myStructure {
    //     int num;
    //     char letter;
    // };

    // struct myStructure first;

    // first.num = 12;
    // first.letter = 'L';

    // printf("%d \n", first.num); // 12

    // struct myStructure second = {6, 'F'};

    // printf("%d", second.num); // 6


// }

    // jednostruke povezane liste / singly linked list

// void insert_after();
// void insert_before();
// void create();
// void delete_after();
// void delete_actual();
// void delete_on_position();
// void delete_by_value();
// void display();

// typedef struct node {
//     int data;
//     struct node *next;
// } NODE;

// NODE *first=NULL,*last=NULL,*temp=NULL;
// // declares a pointer named first, last, temp of type NODE* (pointer to NODE), and initializes it to NULL.

// int isEmpty(){
// 	if (first==NULL) return 1;
// 	else return 0;
// }

// void create(int elem) {
// 	temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=elem;
//     temp->next=NULL;
//     if(first==NULL)
//     {
//         first=temp;
//         last=temp;
//     }
//     else
//     {
//         last->next=temp;
//         last=temp;
//     }
// }

// void insert_after(NODE *pom, int elem) {
	
//     temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=elem;
//     temp->next=pom->next;
//     pom->next=temp; 
//     if (pom==last) last=temp;
    
// }

// void insert_before(NODE *pom, int elem)
// {

//     temp=(struct node*)malloc(sizeof(struct node));
//      temp->next=pom->next;
//      temp->data=pom->data;
//      pom->data=elem;
//      pom->next=temp;
//      if (pom==last){
// 	 temp=last;
//      }
// }

// void delete_after(NODE *pom) {
// //if (isEmpty()) printf("List is empty");

// temp=pom->next;
// pom->next=temp->next;
// temp->next=NULL;
// free(temp);	
// }

// void delete_actual(NODE *pom) {
// 	if ((pom==first)&(first==last)){
// 		first=last=NULL;
// 		free(pom);
// 	}
// 	temp=pom->next;
// 	pom->next=temp->next;
// 	pom->data=temp->data;
// 	free(temp);
	
// }

// void delete_on_position(int pos)
// {		
// int count=1;
// NODE *p, *q;
// p=first;
// q=NULL;
// if (pos==1){
// 	first=p->next;
// 	free(p);
// 	return;
// }
// while(pos!=count) {
//  q=p;	
//  p=p->next;
//  count++;
// }
// delete_after(q);

// }

// void delete_by_value(int value){
// NODE *p,*q;
    
//     p=first;
//     q=NULL;
//     while(p!=NULL)
//     {
//         if(value==p->data)
//         break;
//         else
//         {
//         q=p;	
//         p=p->next;
//             }
//     }
//     if((p==first)&(first==last))
//     {
//         first=last=NULL;
//         free(p);
//         printf("Lista je sada prazna!");
//     }
//     else if(p==last)
//     {
//         q->next=NULL;
//         free(p);
//         last=q;
//     }
//     else
//     {
//         q->next=p->next;
//         free(p);
//     }	
// }


// void display()
// {
//     temp=first;
//     printf("First->");
//     while(temp!=NULL)
//     {
//     //printf("|%d|%d| --> ",temp->data,temp->next);
//     printf("|%d| --> ",temp->data);
//     temp=temp->next;
//     }
//       printf("NULL");
// }

//..........................................

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *temp=NULL;
NODE *first[3]={NULL,NULL,NULL}; //an array of pointers named first, which can hold three pointers of type NODE.
NODE *last[3]={NULL,NULL,NULL};

NODE *concat(NODE *list1, NODE *list2);
NODE *invertuj();

NODE *invertuj(NODE *first) {
    NODE *p, *q, *r;
    p = first;
    q = NULL;
    while(p != NULL) {
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }
    first = q;
    return first;
}

NODE *concat(NODE *list1, NODE *list2) {

    NODE *p;
    if(list1 == NULL) return list2;
    else if (list2 == NULL) return list1;
    p = list1;

    while(p -> next != NULL){
        p = p -> next;
    }

    p -> next = list2;
    return list1;
}

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
//         pirintf("\n");

//         for(;rear != temp; temp = temp -> next) {
//             printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);

//         }
//         printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
//     }
// }
