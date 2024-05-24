#include <stdio.h>
#include <stdlib.h>

#define N 6

// // Grpahs / Grafovi

// // undirected graph / neusmereni graf

// // maximum number of vertices (cvor) in the graph

// struct Graph {
//     // An array of pointers to Node to represent adjacency list (lista susedstva)
//     struct Node* head[N];
// };

// // adjacency list nodes of the graph
// struct Node {
//     int dest;
//     struct Node* next;
// };

// // graph edges (grane)
// struct Edge {
//     int src, dest;
// };

// struct Graph* createGraph(struct Edge edges[], int n) {

//     struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

//     for(int i = 0; i < N; i++ ) {
//         graph -> head[i] = NULL;
//     }

//     for(int i = 0; i < n; i++) {

//         int src = edges[i].src;
//         int dest = edges[i].dest;

//         struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//         newNode -> dest = dest;

//         newNode -> next = graph -> head[src];

//         graph -> head[src] = newNode;

//         newNode = (struct Node*)malloc(sizeof(struct Node));
//         newNode -> dest = src;

//         newNode -> next = graph -> head[dest];

//         graph -> head[dest] = newNode;

//         newNode = (struct Node*)malloc(sizeof(struct Node));

//         newNode -> dest = src;

//         newNode -> next = graph -> head[dest];

//         graph -> head[dest] = newNode;

//     }

//     return graph;
// }

// void printGraph(struct Graph* graph) {
//     for(int i = 0; i < N; i++) {
//         struct Node* ptr = graph -> head[i];

//         while(ptr != NULL) {
//             printf("(%d -> %d)\t", i, ptr -> dest);
//             ptr = ptr -> next;
//         }

//         printf("\n");
//     }
// }

// int main() {
//     struct Edge edges[] = {
//         {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
//     };

//     int n = sizeof(edges)/sizeof(edges[0]);

//     struct Graph *graph = createGraph(edges, n);

//     printGraph(graph);

//     return 0;
// }

//.......................................................

// Directed graph / usmereni graf

// struct Graph {
//     struct Node* head[N];
// };

// struct Node {
//     int dest;
//     struct Node* next;
// };

// struct Edge {
//     int src, dest;
// };

// struct Graph* createGraph(struct Edge edges[], int n) {
//     struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

//     for(int i = 0; i < N; i++) {
//         graph -> head[i] = NULL;
//     }

//     for(int i = 0; i < n; i++) {
//         int src = edges[i].src;
//         int dest = edges[i].dest;

//         struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

//         newNode -> dest = dest;

//         newNode -> next = graph -> head[src];

//         graph -> head[src] = newNode;
//     }

//     return graph;
// }

// void printGrpah(struct Graph* graph) {
    
//     for(int i = 0; i < N; i++) {
//         struct Node* ptr = graph -> head[i];

//         while (ptr != NULL) {
//             printf("(%d -> %d)\t", i, ptr->dest);
// 			ptr = ptr -> next;
//         }

//         printf("\n");
//     }
// }

// int main() {
//     struct Edge edges[] = {
// 		{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
// 		{ 3, 2 }, { 4, 5 }, { 5, 4 }
// 	};

//     int n = sizeof(edges)/sizeof(edges[0]);
    
//     struct Graph *graph = createGraph(edges, n);

//     printGrpah(graph);

//     return 0;
// }

//..............................................

// weighted graph / tezinski graf

struct Graph {
    struct Node* head[N];
};

struct Node {
    int dest, weight;
    struct Node* next;
};

struct Edge {
    int src, dest, weight;
};

struct Graph* createGraph(struct Edge edges[], int n) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    for(int i = 0; i < N; i++) {
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode -> dest = dest;
        newNode -> weight = weight;

        newNode ->  next = graph -> head[src];

        graph -> head[src] = newNode;
    }

    return graph;
}

void printGraph(struct Graph* graph) {
    for(int i = 0; i < N; i++) {
        struct Node* ptr = graph -> head[i];

        while(ptr != NULL ){
            printf("%d -> %d (%d)\t", i, ptr->dest, ptr->weight);
			ptr = ptr->next;
        }

        printf("\n");
    }
}

int main() {
    struct Edge edges[] = {
		{ 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
		{ 3, 2, 10 }, { 4, 5, 1 }, { 5, 4, 3 }
	};

    int n = sizeof(edges)/sizeof(edges[0]);

    struct Graph *graph = createGraph(edges, n);

    printGraph(graph);

    return 0;
}