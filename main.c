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

//...............................................................

// // jednostruke povezane liste / singly linked list

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
//     if(first==NULL) {
//         first=temp;
//         last=temp;
//     }
//     else {
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
// 	    temp=last;
//      }
// }

// void delete_after(NODE *pom) {
// //if (isEmpty()) printf("List is empty");

//     temp=pom->next;
//     pom->next=temp->next;
//     temp->next=NULL;
//     free(temp);	
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

// void delete_on_position(int pos) {
//     int count=1;
//     NODE *p, *q;
//     p=first;
//     q=NULL;
//     if (pos==1){
// 	    first=p->next;
// 	    free(p);
// 	    return;
//     }
//     while(pos!=count) {
//     q=p;	
//     p=p->next;
//     count++;
//     }

//     delete_after(q);

// }

// void delete_by_value(int value){
//     NODE *p,*q;
    
//     p=first;
//     q=NULL;
//     while(p!=NULL) {
//         if(value==p->data) break;
//         else {
//         q=p;	
//         p=p->next;
//         }
//     }

//     if((p==first)&(first==last)) {
//         first=last=NULL;
//         free(p);
//         printf("Lista je sada prazna!");

//     } else if(p==last) {
//         q->next=NULL;
//         free(p);
//         last=q;

//     } else {
//         q->next=p->next;
//         free(p);
//     }
    
// }


// void display() {

//     temp=first;
//     printf("First->");

//     while(temp!=NULL) {
//     //printf("|%d|%d| --> ",temp->data,temp->next);
//     printf("|%d| --> ",temp->data);
//     temp=temp->next;
//     }

//     printf("NULL");
// }

// int main() {
// 	int ch;
// 	int element;
// 	printf("List is empty, add any element: ");
// 	scanf("%d",&element);
//     create(element);
//     do{ 
//     printf("\nSingle Linked List");
//     printf("\n------------");
//     printf("\n1.Insert at first\n2.Insert at last\n3.Delete first\n4.Delete by Position\n5.Delete by Value\n6.Display\n7.Exit");
//     printf("\n\n-->Enter Your Choice:");
//     scanf("%d",&ch);
 
//         switch(ch) {
        	
//             case 1: 
//                 printf("\n-->Enter value:");
//                 scanf("%d",&element);
//                 insert_before(first,element);
//                 break;
//             case 2: 
//                 printf("\n-->Enter value:");
//                 scanf("%d",&element);
//                 insert_after(last,element);
//                 break;
//             case 3: 
//                 delete_actual(first);
//                 break;
//             case 4:
//                 printf("\n-->Enter position to delete:");
//                 scanf("%d",&element);
//                 delete_on_position(element);
//                 break;
//             case 5:
//                 printf("\n-->Enter value to delete:");
//                 scanf("%d",&element);
//                 delete_by_value(element);
//                 break;
//             case 6:
//                 display();
//                 break;
//             case 7:
//                 exit(0);
         
//             default:
//                 printf("\nError-->Enter a valid choice!!"); 
//                 exit(0);
//         }

//     } while(1);
    
//     return 0;
    
// }

//............................................................

// INVERTOAVANJE LISTE I KONKATENACIJA DVE LISTE

// typedef struct node {
//     int data;
//     struct node *next;
// } NODE;

// NODE *temp=NULL;
// NODE *first[3]={NULL,NULL,NULL}; //an array of pointers named first, which can hold three pointers of type NODE.
// NODE *last[3]={NULL,NULL,NULL};

// NODE *concat(NODE *list1, NODE *list2);
// NODE *invertuj();

// NODE *invertuj(NODE *first) {
//     NODE *p, *q, *r;
//     p = first;
//     q = NULL;
//     while(p != NULL) {
//         r = q;
//         q = p;
//         p = p -> next;
//         q -> next = r;
//     }
//     first = q;
//     return first;
// }

// NODE *concat(NODE *list1, NODE *list2) {

//     NODE *p;
//     if(list1 == NULL) return list2;
//     else if (list2 == NULL) return list1;
//     p = list1;

//     while(p -> next != NULL){
//         p = p -> next;
//     }

//     p -> next = list2;
//     return list1;
// }

//..............................................

// JEDNOSTRUKO POVEZANE LISTE - ZADACI

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *first, *last;

// int insert(int x) {
//     node* temp;
//     temp = (node*)malloc(sizeof(node));
//     temp -> data = x;
//     if(first == NULL) {
//         first = last = temp;
//     } else {
//         last -> next = temp;
//         temp -> next = NULL;
//         last = temp;
//     }
// }

// int isInTheList(int value) {
    
//     node *t = first;
//     while(t != NULL) {
//         if (t -> data == value) return 1;
        
//         t = t -> next;
//     }
    
//     return 0;
// }

// node* findElement(int value) {
//     node *i;
    
//     for(i = first; i != NULL; i = i -> next) {
//         if(i -> data == value) {
//             return i;
//         } 
//     } 
// }

// void display() {
    
//     node *i;
    
//     for(i = first; i != NULL; i = i -> next) printf("%d ", i -> data); 
// }

// int main() {
    
//     insert(1);
//     insert(2);
//     insert(3);
//     display();

//     printf("%d\n", isInTheList(1));
//     printf("%d\n", isInTheList(4));
    
//     if(isInTheList(1)) printf("%d is in the list\n", 1);
    
//     printf("%d", findElement(2));
//     printf("%d", findElement(4));
//     printf("%d", findElement(3));
    
// }

//.................................................................

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *first[3]={NULL,NULL,NULL};
// node *last[3]={NULL,NULL,NULL};

// void replaceElement(int listNum, int el1, int el2) {
//     node *i;
    
//     for(i = first[listNum]; i != NULL; i = i -> next) {
        
//         if(i -> data == el1) i -> data = el2;
        
//     }
// }

// void display(node *first) {
    
//     node *i;
    
//     for(i = first; i != NULL; i = i -> next) printf("%d ", i -> data); 
    
//     printf("\n");
// }

// void insert(int x, int listNum) {
//     node* temp;
//     temp = (node*)malloc(sizeof(node));
//     temp -> data = x;
//     if(first[listNum] == NULL) {
//         first[listNum] = last[listNum] = temp;
//     } else {
//         last[listNum] -> next = temp;
//         last[listNum] = temp;
//     }
    
// }

// int main() {
    

//     insert(1, 1);
//     insert(3, 1);
//     insert(2, 1);
//     insert(3, 1);
//     insert(4, 1);
//     insert(3, 1);
//     insert(3, 1);
//     display(first[1]);
//     replaceElement(1, 3, 7);
//     display(first[1]);
    
//     return 0;
    
// }

//.....................................................

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *first[3] = {NULL, NULL, NULL};
// node *last[3] = {NULL, NULL, NULL};

// void insertAtHead(int x, int listNum) {
    
//     node *temp = (node*)malloc(sizeof(node));

//     temp -> data = x;
//     temp -> next = NULL;

//     if(first[listNum] == NULL) {
//         first[listNum] = temp;
//         last[listNum] = temp;
//     } else {
//         temp -> next = first[listNum];
//         first[listNum] = temp;
//     }
// }

// void deleteAtHead(int listNum) {
//     node *temp = first[listNum];

//     first[listNum] = first[listNum] -> next;
//     temp -> next = NULL;
//     free(temp);
// }

// void display(node *first) {
    
//     node *i;
    
//     for(i = first; i != NULL; i = i -> next) printf("%d ", i -> data); 
    
//     printf("\n");
// }

// int compareLists(node *l1, node *l2) {
//     node *i;
//     node *j;
    
//     for(i = l1, j = l2; i != NULL && j != NULL; ) {
        
//         if(i -> data != j -> data) return 0;
//         i = i-> next;
//         j = j -> next;
        
//     }
    
//     return 1;
// }

// int main() {
    
//     insertAtHead(4, 1);
//     insertAtHead(3, 1);
//     insertAtHead(2, 1);
//     insertAtHead(1, 1);
//     deleteAtHead(1);
//     display(first[1]);
    
//     insertAtHead(4, 2);
//     insertAtHead(3, 2);
//     insertAtHead(2, 2);
    
//     insertAtHead(1, 0);
    
//     printf("%d", compareLists(first[1], first[2]));
//     printf("%d", compareLists(first[1], first[0]));
    
//     return 0;
    
    
// }

//................................................................

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// } node;

// node *first, *last, *temp;

// int insert(int x) {
//     temp = (node*)malloc(sizeof(node));
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

// int maxNum() {
//     int max = first -> data;
//     temp = first -> next;
    
//     for(; temp != NULL; temp = temp -> next) {
        
//         if(temp -> data > max ) max = temp -> data;
        
//     }
    
//     return max;
// }

// int calcSum() {
    
//     int sum = 0;
    
//     for(node *i = first; i != NULL; i = i -> next) {
//         sum += i -> data;
//     }
    
//     return sum;
    
// }

// void display() {
    
//     for(node *i = first; i != NULL; i = i -> next) printf("%d ", i -> data); 
    
//     printf("\n");
// }

// int main() {
    
//     insert(1);
//     insert(2);
//     insert(7);
//     insert(3);

//     display();
//     printf("%d\n", maxNum());
//     printf("%d\n", calcSum());
    
// }

//..............................................................


// typedef struct node {
//     int data;
//     struct node *next;
// } NODE;

// NODE *temp = NULL;
// NODE *first[3] = {NULL, NULL, NULL};
// NODE *last[3] = {NULL, NULL, NULL};

// NODE *search(NODE *list, int value) {

//     NODE *ptr;

//     for(ptr = list; ptr != NULL && ptr -> data != value; ptr = ptr -> next );

//     return ptr;
// }

// int isPresent(NODE *head, int value) {
//     NODE *t = head;

//     while(t != NULL ) {
//         if(t -> data == value) return 1;
//         t = t -> next;
//     }

//     return 0;
// }

//..................................................

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
    
//     return 0;
// }

//............................................................................

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

// Binarno stablo

