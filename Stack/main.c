#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

// STEK / STACK

// implementiranje preko niza

// #define SIZE 5

// int s[SIZE], top = -1;

// // Function to check if the stack is full
// int Sfull() {

//     if(top == SIZE - 1) return 1;
//     else return 0;

// }

// int Sempty() {
//     if (top == -1) return 1;
//     return 0;
// }

// void push(int elem) {
//     if (Sfull()) printf("Overflow \n");
//     else {
//         ++top;
//         s[top] = elem;
//     }
// }

// int pop() {

//     int elem;
//     if(Sempty()){
//         printf("Underflow: ");
//         return -1;
//     } else {
//         elem = s[top];
//         top--;
//         return elem;

//     }
// }

// display() { 
    
//     if(Sempty()) printf("\n Empty Stack \n");
//     else {
//         for(int i = 0; i <= top; i++) {
//             printf("%d\n", s[i]);
//         }
//         printf("Top");
//     }
// }

// int main() {
//     int opn, elem;
//     do {
//         printf("\n ### Stack Operations ### \n\n");printf("\n Press 1-Push, 2-Pop,3-Display,4-Exit\n");
//         printf("\n Your option ? ");
//         scanf("%d",&opn);

//         switch (opn)
//         {
//         case 1: 
//             printf("\n Read the element to be pushed");
//             scanf("%d", &elem);
//             push(elem);
//             break;
//         case 2: 
//             elem = pop();
//             if(elem != -1) printf("Popped element is %d \n ", elem);
//             break;
//         case 3: 
//             printf("\n\nStatus of Stack\n\n");
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

//     } while(opn !=4);
// }

//...................................

// Implementacija steka preko lancane liste

// typedef struct node {
//     int data;
//     struct node *link;
// } NODE;

// void push(int);
// int pop();
// void display();
// NODE *top = NULL;

// int main() {
//     int opn,elem;
//     do {
//         clrscr();
//         printf("\n ### Linked List Implementation of STACK Operations ### \n\n");
//         printf("\n Press 1-Push, 2-Pop, 3-Display,4-Exit\n");
//         printf("\n Your option ? ");
//         scanf("%d",&opn);
//         switch(opn) {
//         case 1:
//             printf("\n\nRead the Element tobe pushed ?");
//             scanf("%d",&elem);
//             Push(elem);
//             break;
//         case 2:
//             elem=Pop();
//             if(elem != -1)
//                 printf(" Deleted Node(From Top)with the Data: %d\n",elem);
//             break;
//         case 3: printf("Linked List Implementation of Stack: Status:\n");
//             Display(); break;
//         case 4: printf("\n\n Terminating \n\n"); break;
//         default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
//             break;
//         }
//         printf("\n\n\n\n  Press a Key to Continue . . . ");
//         getch();
//     } while(opn != 4);
//
//      return 0;
// }


// void push (int info) {
//     NODE *temp;
//     temp = (NODE*)malloc(sizeof(NODE));
//     if (temp == NULL) printf("Overflow");
//     else {
//         temp -> data = info;
//         temp -> link = top;
//         top = temp;
//         printf("Node has been inserted at the top (front) successfully");
//     }
// }

// int pop() {
//     int info;
//     NODE *t;
//     if(top == NULL) {
//         printf("Underflow");
//         return -1;
//     } else {
//         t = top;
//         info = top -> data;
//         top = top -> link;
//         t -> link = NULL;
//         free(t);
//         return info;
//     }
// }

// void display() {
//     NODE *t;
//     if(top == NULL) printf("Empty stack \n");
//     else {
//         t = top;
//         while(t) {
//             printf("%d \n", t -> data);
//             t = t -> link;
//         }
//     }
// }

//..................................................................

// Dva steka preko jednog niza

// #define SIZE 10

// int s[SIZE], top[3] = {0, -1, SIZE};

// int Sfull() {
//     if(top[1] == top[2] - 1) return 1;
    
//     return 0;
// }

// int Sempty(stno) {
//     switch (stno) {
//     case 1:
//         if (top[1] == -1) return 1;
//         else return 0;
//         break;
//     case 2:
//         if(top[2] == SIZE) return 1;
//         else return 0;
//         break;
    
//     }
// }

// void push (int elem, int stno) {
//     int pos;
//     if(Sfull()) printf("Overflow");
//     else {
//         if(stno == 1) pos = ++top[stno];
//         else pos = --top[stno];
//         s[pos] = elem;
//     }

// }

// int pop (int stno) {
//     int elem, pos;

//     if(Sempty(stno)) {
//         printf("Underflow");
//         return -1;
//     } else {
//         pos = top[stno];
//         elem = s[pos];
//         if(stno == 1) top[stno]--;
//         else top[stno]++;

//         return elem;
//     }

// }

// void display(int stno) {
//     if (Sempty(stno)) printf("Empty stack \n");
//     else {
//         if(stno == 1) {
//             for(int i = 0; i <= top[stno]; i++) {
//                 printf("%d\n", s[i]);
//             }
//         } else {
//             for(int i =SIZE - 1; i >= top[stno]; i--) {
//                 printf("%d \n", s[i]);
//             }
//         }

//     }
// }

// int main() {                        
//     int opn,elem,stno;
//     do {
//         clrscr();
//         printf("\n ### Stack Operations ### \n\n");
//         printf("\n Stack Number (1,2): ");
//         scanf("%d",&stno);
//         printf("\n Press 1-Push, 2-Pop,3-Display,4-Exit\n");
//         printf("\n Your option ? ");
//         scanf("%d",&opn);
 
//         switch(opn) {
//         case 1: printf("\n\nRead the element to be pushed ?");
//             scanf("%d",&elem);
//             push(elem,stno); break;
//         case 2: elem=pop(stno);
//             if( elem != -1)
//                 printf("\n\nPopped Element is %d \n",elem);
//             break;
//         case 3: printf("\n\nStatus of Stack %d \n\n",stno);
//             display(stno); break;
//         case 4: printf("\n\n Terminating \n\n"); break;
//         default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
//             break;
//         }
//         printf("\n\n\n\n  Press a Key to Continue . . . ");
//         getch();
//     } while(opn != 4);

//     return 0;
// }


//.......................................