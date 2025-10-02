#include <stdio.h>
#include <stdlib.h>

// Structure de la liste
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour insérer un élément dans une liste triée
void insertSorted(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL && temp->next->data < value) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Fonction pour afficher la liste
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    insertSorted(&head, 10);
    insertSorted(&head, 0);
    insertSorted(&head, 5);
    insertSorted(&head, 39);
    insertSorted(&head, 1);

    printf("Liste triée : ");
    printList(head);

    return 0;
}