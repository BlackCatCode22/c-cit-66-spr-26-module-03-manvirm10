#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node** head, int newData) {

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {

        Node* last = *head;

        while (last->next != nullptr) {
            last = last->next;
        }

        last->next = newNode;
    }
}

void displayList(Node* node) {

    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }

    cout << endl;
}


void deleteNode(Node** head, const int value) {


    if (*head == nullptr)
        return;

    Node* temp = *head;


    if (temp->data == value) {
        *head = temp->next;
        delete temp;
        return;
    }


    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }


    if (temp->next != nullptr) {

        Node* nodeToDelete = temp->next;

        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }
}


int main() {

    Node* head = nullptr;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);

    displayList(head);

    deleteNode(&head, 2);

    displayList(head);

    return 0;
}