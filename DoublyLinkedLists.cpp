#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertEnd(Node** head, int newData) {

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* last = *head;

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}


void displayForward(Node* node) {

    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }

    cout << endl;
}


void displayBackward(Node* node) {

    Node* last = node;

    while (last->next != nullptr) {
        last = last->next;
    }

    while (last != nullptr) {
        cout << last->data << " ";
        last = last->prev;
    }

    cout << endl;
}


void deleteNode(Node** head, int value) {

    if (*head == nullptr)
        return;

    Node* current = *head;

    while (current != nullptr && current->data != value) {
        current = current->next;
    }

    if (current == nullptr)
        return;

    if (current->prev != nullptr)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != nullptr)
        current->next->prev = current->prev;

    delete current;
}


int main() {

    Node* head = nullptr;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);


    displayForward(head);

    deleteNode(&head, 2);


    displayForward(head);


    displayBackward(head);

    return 0;
}