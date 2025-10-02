#include <stdio.h>
#include <stdlib.h>

// Structure de la liste
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour ajouter un élément à la liste
void addNode(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
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

// Fonction pour supprimer toutes les occurrences d'un élément
void deleteOccurrences(Node** head, int value) {
    Node* temp = *head;
    Node* prev = NULL;

    // Supprimer les occurrences en tête
    while (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        temp = *head;
    }

    // Supprimer les occurrences dans le reste de la liste
    while (temp != NULL) {
        if (temp->data == value) {
            prev->next = temp->next;
            free(temp);
            temp = prev->next;
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = NULL;

    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 2);
    addNode(&head, 4);

    printf("Liste avant suppression : ");
    printList(head);

    deleteOccurrences(&head, 2);

    printf("Liste après suppression : ");
    printList(head);

    return 0;
}