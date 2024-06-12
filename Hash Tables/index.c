#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct DataItem {
   int data;   
   int key;
};

struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;

int hashCode (int key) {
    return key % SIZE;
}

struct DataItem *search(int key) {
    int hashIndex = hashCode(key);

    while (hashArray[hashIndex] != NULL) {

        if(hashArray[hashIndex] -> key == key) return hashArray[hashIndex];

        ++hashIndex;

        hashIndex %= SIZE;

    }

    return NULL;
}

void insert (int key, int data) {
    struct DataItem *item = (struct DataItem*)malloc(sizeof(struct DataItem));

    item -> data = data;
    item -> key = key;

    int hashIndex = hashCode(key);

    while(hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != -1) {
        ++hashIndex;

        hashIndex %= SIZE;
    }

    hashArray[hashIndex] = item;
}

struct DataItem* delete (struct DataItem* item) {
    int key = item -> key;

    int hashIndex = hashCode(key);

    while(hashArray[hashIndex] != NULL) {
        if(hashArray[hashIndex] -> key == key) {
            struct DataItem* temp = hashArray[hashIndex];

            hashArray[hashIndex] = dummyItem;
            return temp;
        }

        ++hashIndex;

        hashIndex %= SIZE;
    }

    return NULL;
}

void display() {

    for(int i = 0; i < SIZE; i++) {
        if(hashArray[i] != NULL)  printf(" (%d,%d)",hashArray[i] -> key, hashArray[i] -> data);
        else printf(" ~~ ");
    }

    printf("\n");
}

//................................................................

// Napišite funkciju update, koja će ažurirati vrednost za dati ključ u heš tabeli. Ako ključ ne postoji u tabeli, funkcija bi trebala umetnuti novi element.
void update(int key, int newData) {
    int hashIndex = hashCode(key);

    while(hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != key && hashArray[hashIndex] -> key != -1) {
        
        ++hashIndex;

        hashIndex %= SIZE;
    }

    if (hashArray[hashIndex] == NULL || hashArray[hashIndex] -> key == -1) {
        struct DataItem *item = (struct DataItem*)malloc(sizeof(struct DataItem));
        item -> key = key;
        item -> data = newData;
        hashArray[hashIndex] = item;
    } else {
        hashArray[hashIndex] -> data = newData;
    }
}

// Napišite funkciju koja broji koliko elemenata ima u heš tabeli.
int countElements() {
    int num = 0;

    for(int i = 0; i < SIZE; i++) {
        if(hashArray[i] != NULL && hashArray[i] -> key != -1) num++;
    }

    return num;
}

// Napišite funkciju containsKey, koja proverava da li određeni ključ postoji u heš tabeli.
bool containsKey(int key) {
    for(int i = 0; i < SIZE; i++) {
        if(hashArray[i] -> key == key) return true;
    }

    return false;
}

int main() {
    dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));

    dummyItem -> data = -1;
    dummyItem -> key = -1;

    insert(1, 20);
    insert(2, 70);
    insert(24, 17);
    insert(4, 11);
    display();
    update(4, 88);
    update(24, 7);
    update(44, 2);
    update(0, 6);
    display();
    printf("%d\n", countElements());
    if(containsKey(1)) printf("Postoji 1\n");
    if(containsKey(3)) printf("Postoji 3\n");

    return 0;


}