#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

// REDOVI / QUEUES 

// imprementacija kruznog reda preko niza / circular queue

// #define SIZE 5

// int CQ[SIZE], f = -1, r = -1;

// // function to check circular queue full
// int CQfull() {
//     if((f == r + 1) || (f == 0 && r == SIZE - 1)) return 1;
//     return 0;
// }

// int CQempty() {
//     if(f == -1) return 1;
//     return 0;
// }

// void CQinsert(int elem) {

//     if(CQfull()) printf("Overflow");
//     else {
//         if (f == -1) f = 0;
//         r = (r + 1) % SIZE;
//         CQ[r] = elem;
//     }

// }

// int CQdelete() {
//     int elem;

//     if(CQempty()) {
//         printf("Underflow");
//         return -1;
//     } else {
//         elem = CQ[f];

//         if(f == r) {
//             f = -1;
//             r = -1;
//         } else f = (f + 1) % SIZE;

//         return elem;
//     }
// }

// void display() {
//     int i;
//     if(CQempty()) printf("Empty Queue");
//     else {
//         printf("Front[%d] -> ", f);

//         for(i = f; i != r; i = (i + 1) % SIZE) printf("%d", CQ[i]);

//         printf("%d", CQ[i]);

//         printf("<-[%d] Rear", r);
//     }
// }

// int main() {
//     int opn, elem;

//     do {
//         printf("Circular Queue Operations ");
//         printf("\n Press 1-Insert, 2-Delete,3-Display,4-Exit\n");
//         printf("\n Your option ? ");
//         scanf("%d",&opn);

//         switch(opn) {
//             case 1: 
//                 printf("Read the elemnt to be inserted");
//                 scanf("%d",&elem);
//                 CQinsert(elem); 
//                 break;
//             case 2: 
//                 elem = CQdelete();
//                 if(elem != -1) printf("Deleted element is %d", elem);
//                 break;
//             case 3: 
//                 printf("Status of Circular Queue");
//                 display();
//                 break;
//             case 4: 
//                 printf("Terminating");
//                 break;
//             default: 
//                 printf("Invalid option, try again");
//                 break;
//         }

//         printf("Press a key to continue...");

//     } while(opn != 4);
// }

//.............................................................

// Implementacija reda preko ulancanje liste

// typedef struct node {
//     int data;
//     struct node *link;
// } NODE;

// void insert(int);
// int delete();
// void display();
// NODE *front, *rear;

// void insert(int info) {
//     NODE *temp;
//     temp = (NODE*)malloc(sizeof(NODE));
    
//     if(temp == NULL) printf("Out of memory! Overflow!");
//     else {
//         temp -> data = info;
//         temp -> link = NULL;
        
//         if(front == NULL) {
//             front = rear = temp;
//         } else {
//             rear -> link = temp;
//             rear = temp;
//         }

//         printf("Node has been inserted at end successfully");
//     }
// }

// int delete() {
//     int info;
//     NODE *t;

//     if(front == NULL) {
//         printf("Underflow");
//         return -1;
//     } else {
//         t = front;
//         info = front -> data;
        
//         if(front == rear) rear = NULL;
//         front = front -> link;
//         t -> link = NULL;
//         free(t);
//         return info;
//     }
// }

// void display() {
//     NODE *t;
//     if(front == NULL )printf("Empty Queue");
//     else {
//         t = front;
//         printf("Front ->");
        
//         while(t) {
//             printf("[%d] ->", t -> data);
//             t = t -> link;
//         }

//         printf("Read \n");
//     }
// }

// int main() {
//     int opn, elem;
//     front = rear = NULL;
//     do {
//         printf("\n ### Linked List Implementation of QUEUE Operations ### \n\n");
//         printf("\n Press 1-Insert, 2-Delete, 3-Display,4-Exit\n");
//         printf("\n Your option ? ");
//         scanf("%d",&opn);

//         switch (opn)
//         {
//         case 1:
//             printf("Read the element to be inserted");
//             scanf("%d",&elem);
//             insert(elem);
//             break;
//         case 2:
//             elem=delete();
//             if(elem != -1) printf(" Deleted Node(From Front)with the Data: %d\n",elem);
//             break;
//         case 3: 
//             printf("Linked List Implementation of Queue: Status:\n");
//             display(); 
//             break;
//         case 4: 
//             printf("\n\n Terminating \n\n"); 
//             break;
//         default: 
//             printf("\n\nInvalid Option !!! Try Again !! \n\n");
//             break;
    
//         }
//         printf("\n\n\n\n  Press a Key to Continue . . . ");
//     } while (opn != 4);
// }

//.......................................................

// Red sa dva pristupna kraja

// #define SIZE 100

// int queue[SIZE];
// int F = -1;
// int R = -1;

// void insert_r(int x) {
//     if(F == (R + 1) % SIZE) printf("Queue Oveflow");
//     else if(R == -1) {
//         F = 0;
//         R = 0;
//         queue[R] = x;
//     } else {
//         R = (R + 1) % SIZE;
//         queue[R] = x;
//     }
// }

// void insert_f(int x) {
//     if(F == (R + 1) % SIZE) {
//         printf("Queue Overflow");
//     } else if (R == -1) {
//         F = 0;
//         R = 0;
//         queue[R] = x;
//     } else {
//         F = (F + SIZE - 1) % SIZE;
//         queue[F] = x;
//     }
// }

// int delete_r() {
//     int x;
//     if(F == -1) {
//         printf("Queue Underflow");
//     } else if(F == R) {
//         x = queue[F];
//         F = -1;
//         R = -1;
//     } else {
//         x = queue[R];
//         R = (R + SIZE - 1) % SIZE;
//     }

//     return x;
// }

// int delete_f() {
//     int x;
//     if(F == -1) {
//         printf("Queue underflow");
//     } else if(F == R) {
//         x = queue[F];
//         F = -1;
//         R = -1;
//     } else {
//         x = queue[F];
//         F = (F + 1) % SIZE;
//     }

//     return x;
// }

// void display() {

//     int i;
//     if(F == -1) printf("Empty Queue");
//     else {
//         printf("Front [%d] ->", F);
//         for(i = F; i != R; i = (i + 1) % SIZE) printf("%d", queue[i]);

//         printf("%d ",queue[i]);
//         printf("%d ",queue[i]);
//         printf("<-[%d]Rear",R);
//     }

// }

// void main() {
//     char choice;
//     int x;
//     while (1) {
//         printf("1: Insert on Front\n");
//         printf("2: Insert on Rear\n");
//         printf("3: Delete From Front\n");
//         printf("4: Delete From Rear\n");
//         printf("5: Display list \n");
//         printf("6: Exit Program\n");
//         printf("Enter Your Choice:");
//         choice = getche();

//           switch (choice) {
//         case '1':
//             printf("\nEnter Integer Data :");
//             scanf("%d",&x);
//             insert_f(x);
//             break;
//         case '2':
//             printf("\nEnter Integer Data :");
//             scanf("%d",&x);
//             insert_r(x);
//             break;
//         case '3':
//             printf("\nDeleted Data From Front End: %d",delete_f());
//             break;
//         case '4':
//             printf("\nDeleted Data From Back End: %d",delete_r());
//             break;
//         case '5':
//             printf("\n Red izgleda ovako \n: %d",display());
//             break;
//         case '6':
//             exit(0);
//             break;
//         }

//     }
  
// }

// .........................................................

// ZADACI

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *front, *rear;

// void insert(int x) {
//     node *temp = (node*)malloc(sizeof(node));

//     if(temp == NULL) return;

//     temp -> data = x;
//     temp -> next = NULL;

//     if(front == NULL) {
//         front = temp;
//         rear = temp;
//     } else {
//         rear -> next = temp;
//         rear = temp;
//     }

// }

// int delete() {
//     if(front == NULL) return -1;

//     node *t = (node*)malloc(sizeof(node));
//     int elem;

//     elem = front -> data;

//     if(front == rear) {
//         front = NULL;
//         rear = NULL;
//     } else {
//     t = front;
//     front = front -> next;
//     t-> next = NULL;
//     free(t);

//     }

//     return elem;
// }

// void display() {
//     node *temp = (node*)malloc(sizeof(node));
    
//     for(temp = front; temp != NULL; temp = temp -> next) {
//         printf("%d ", temp -> data);
//     }
//     printf("\n");
// }

// int main() {
    
//     insert(1);
//     insert(2);
//     insert(3);
//     display();
//     delete();
//     display();
    
//     return 0;
// }

//.............................................................

