#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* t = new Node(val);

        if(head == NULL) {
            head = tail = t;
        } else {
            tail->next = t;
            tail = t;
        }

        size++;
    }

    void insertAtBeginning(int val) {
        Node* t = new Node(val);

        if(head == NULL) {
            head = tail = t;
        } else {
            t->next = head;
            head = t;
        }

        size++;
    }

    void insertAtPos(int idx, int val) {
        if(idx < 0 || idx > size) {
            cout << "Invalid index" << endl;
            return;
        }

        if(idx == 0) {
            insertAtBeginning(val);
            return;
        }

        if(idx == size) {
            insertAtEnd(val);
            return;
        }

        Node* t = new Node(val);
        Node* temp = head;

        for(int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        t->next = temp->next;
        temp->next = t;

        size++;
    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void getAtIdx(int idx) {
        if(idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        }

        Node* temp = head;

        for(int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        cout << temp->val << endl;
    }

    void deleteAtHead() {
        if(head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        size--;

        if(head == NULL)
            tail = NULL;
    }

    void deleteAtTail() {
        if(head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if(head->next == NULL) {
            delete head;
            head = tail = NULL;
            size--;
            return;
        }

        Node* temp = head;

        while(temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;

        size--;
    }

    void deleteAtPos(int idx) {
        if(idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        }

        if(idx == 0) {
            deleteAtHead();
            return;
        }

        if(idx == size - 1) {
            deleteAtTail();
            return;
        }

        Node* temp = head;

        for(int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        Node* del = temp->next;
        temp->next = temp->next->next;

        delete del;
        size--;
    }
};

int main() {
    LinkedList ll;

    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();

    ll.insertAtBeginning(5);
    ll.display();

    ll.insertAtPos(2, 15);
    ll.display();

    ll.getAtIdx(2);

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtPos(1);
    ll.display();

    return 0;
}