#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

// // jednostruke povezane liste / singly linked list
//
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

//.........................................................................................

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

//....................................................................

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