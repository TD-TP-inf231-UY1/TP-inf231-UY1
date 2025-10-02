#include <stdio.h>
#include <stdlib.h>

// Structure de la liste doublement chaînée
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;

// Fonction pour insérer un élément dans une liste doublement chaînée triée
void insertSortedD(DNode** head, int value) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
    } else {
        DNode* temp = *head;
        while (temp->next != NULL && temp->next->data < value) {
            temp = temp->next;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}

// Fonction pour afficher la liste
void printList(DNode* head) {
    DNode* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    DNode* head = NULL;

    insertSortedD(&head, 50);
    insertSortedD(&head, 26);
    insertSortedD(&head, 80);
    insertSortedD(&head, 43);
    insertSortedD(&head, 19);

    printf("Liste triée : ");
    printList(head);

    return 0;
}