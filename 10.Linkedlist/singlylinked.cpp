#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class singlyLinkedList{
    private:
    Node* head;
public:
    singlyLinkedList(){
        head = NULL;
}

void createlist(int n){
    if(n<=0){
        cout<<"Invalid number "<<endl;
        return;
    }else{
        int value;
        cout<<"Enter value of node 1: ";
        cin>>value;
        Node* NewNode = new Node(value);
        head = NewNode;
        Node* temp = head;
        for(int i=2;i<=n;i++){
            cout<<"Enter value of node "<<i<<": ";
            cin>>value;
            Node* NewNode = new Node(value);
            temp->next = NewNode;
            temp= NewNode;
    }
    cout<<"list created successfully."<<endl;
}
}

void display(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node* ptr = head;
        cout<<"linked list is: ";

        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
}

void count(){
    int count =0;
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node* ptr = head;
        while(ptr!=NULL){
            count++;
            ptr = ptr->next;
        }
        cout<<"No. of nodes in list: "<<count<<endl;
    }
}

void insertBegin(int value){
    Node* NewNode = new Node(value);
    if(NewNode == NULL){ 
        cout << "Overflow" << endl;
    }
    else {
        NewNode->next = head;
        head = NewNode;
        cout << "Node inserted at beginning." << endl;
    }
}

void insertEnd(int value){
    Node* NewNode = new Node(value);
    if(NewNode == NULL){
        cout << "Overflow" << endl;
    }
    else {
        if(head == NULL){
            head = NewNode;
        }
        else {
            Node* temp = head;
            do {
                if(temp->next == NULL){
                    temp->next = NewNode;
                    break;
                }
                temp = temp->next;
            } while(temp != NULL);
        }
        cout << "Node inserted at end." << endl;
    }
}

void insertAtSp(int item, int pos){
    Node* ptr= head;
   if(pos<=0){
        cout<<"Invalid position"<<endl;
        return;
    }
    else if(pos==1){
    insertBegin(item);
    return;
    }else{
        for(int i=1;ptr !=NULL && i<pos-1;i++){
            ptr= ptr->next;
        }
            if(ptr==NULL ){
                cout<<"Position invalid"<<endl;
                return;
            }else {
        Node* NewNode = new Node(item);
        NewNode->next = ptr->next;
        ptr->next = NewNode;
        cout << "Node inserted at " << pos << " position." << endl;
    }
           
        }
    }

void deleteBegin(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node* ptr = head;
        head = head->next;
        free (ptr);
        cout<<"Node deleted from beginning."<<endl;
    }
}

void deleteEnd(){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    else if(head->next == NULL){  
        delete head;
        head = NULL;
        cout << "Node deleted." << endl;
    }
    else {
        Node* ptr = head;
        Node* prev = NULL;
        while(ptr->next != NULL){
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        delete ptr;
        cout << "Node deleted from end." << endl;
    }
}
void deleteAtSp(int pos) {
    if(head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if(pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if(pos == 1) {  
        Node* ptr = head;
        head = head->next;
        delete ptr;
        cout << "Node deleted from position 1." << endl;
        return;
    }
    Node* ptr = head;
    for(int i = 1; ptr != NULL && i < pos - 1; i++) {
        ptr = ptr->next;
    }
    if(ptr == NULL ) {
        cout << "Position invalid" << endl;
        return;
    }
    Node* temp = ptr->next;
    ptr->next = temp->next;
    delete temp;
    cout << "Node deleted from position " << pos << "." << endl;
}

void reverse() {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    cout << "Linked list reversed." << endl;
}
};
int main() {
    singlyLinkedList s;
    int choice, value, pos, n;
        cout << " Singly Linked List Menu"<<endl;
        cout << "1. Create List" <<endl;
        cout << "2. Display List "<<endl;
        cout << "3. Count Nodes "<<endl;
        cout << "4. Insert at Beginning"<<endl;
        cout << "5. Insert at End "<<endl;
        cout << "6. Insert at Specific Position "<<endl;
        cout << "7.  Delete from Beginning  "<<endl;
        cout << "8. Delete from End "<<endl;
        cout << "9. Deletefrom Specific Position"<<endl;
        cout << "10. Reverse List "<<endl;
        cout << "11. Exit"<<endl;
         do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter number of nodes: ";
                cin >> n;
                s.createlist(n);
                break;
            case 2:
                s.display();
                break;
            case 3:
                s.count();
                break;
            case 4:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                s.insertBegin(value);
                break;
            case 5:
                cout << "Enter value to insert at end: ";
                cin >> value;
                s.insertEnd(value);
                break;
            case 6:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> pos;
                s.insertAtSp(value, pos);
                break;
            case 7:
                s.deleteBegin();
                break;
            case 8:
                s.deleteEnd();
                break;
            case 9:
                cout << "Enter position to delete: ";
                cin >> pos;
                s.deleteAtSp(pos);
                break;
            case 10:
                s.reverse();
                break;
            case 11:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while(choice != 11);
    return 0;
}
