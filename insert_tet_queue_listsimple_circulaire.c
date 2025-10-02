#include <stdio.h>
#include <stdlib.h>

// Structure de la liste doublement chaînée circulaire
typedef struct CDNode {
    int data;
    struct CDNode* prev;
    struct CDNode* next;
} CDNode;

// Fonction pour insérer un élément en tête
void insertHeadCD(CDNode** head, int value) {
    CDNode* newNode = (CDNode*)malloc(sizeof(CDNode));
    newNode->data = value;

    if (*head == NULL) {
        *head = newNode;
        newNode->prev = *head;
        newNode->next = *head;
    } else {
        CDNode* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        newNode->prev = temp;
        newNode->next = *head;
        temp->next = newNode;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Fonction pour insérer un élément en queue
void insertTailCD(CDNode** head, int value) {
    CDNode* newNode = (CDNode*)malloc(sizeof(CDNode));
    newNode->data = value;

    if (*head == NULL) {
        *head = newNode;
        newNode->prev = *head;
        newNode->next = *head;
    } else {
        CDNode* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = *head;
        (*head)->prev = newNode;
    }
}

// Fonction pour afficher la liste
void printList(CDNode* head) {
    CDNode* temp = head;
    if (temp == NULL) return;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    CDNode* head = NULL;

    insertTailCD(&head, 1);
    insertTailCD(&head, 4);
    insertTailCD(&head, 5);
    insertHeadCD(&head, 0);

    printf("Liste : ");
    printList(head);

    return 0;
}