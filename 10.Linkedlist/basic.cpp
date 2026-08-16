#include<iostream>
using namespace std;

// class Student{
// public:
//     string name;
//     int rno;
//     float marks;
//     Student(string n,int r,float m){
//         name=n;
//         rno=r;
//         marks=m;
//     }

// };
// void change(Student* s){
//     s->name="John";
//     s->rno=200;
//     s->marks=85;
// }
// int main(){
// //  Student s("Shekhar",100,98);
// // cout<<"name:"<<s.name<<endl;
// // cout<<"roll no:"<<s.rno<<endl;
// // cout<<"marks:"<<s.marks<<endl;
// // change(&s);
// // cout<<"After change:"<<endl;
// // cout<<"name:"<<s.name<<endl;
// // cout<<"roll no:"<<s.rno<<endl;
// // cout<<"marks:"<<s.marks<<endl;
// Student* s1 = new Student("Shekhar",100,98);
// cout<<"name:"<<s1->name<<endl;
// change(s1);
// cout<<"name: "<<s1->name<<endl;
// }


class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     a.next=&b;
//     b.next=&c;
//     // cout<< a.next<<endl;  //address of b
//     // cout<< a.next->val<<endl;  //value of b
//     // cout<< a.next->next->val<<endl;  //value of c
//     // cout<<a.val<<" "<<a.next->val<<" "<<a.next->next->val<<endl;


//     //print the list using pointer
//     Node temp=a;
//     while(temp.next!=NULL){
//        cout<<temp.val<<" ";
//        temp=*temp.next; 
//     }
// }

void display(Node* temp){
        if(temp==NULL) return;
        cout<<temp->val<<" ";
        display(temp->next);
     }
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30); 
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    Node* temp=a;

    //iteratively
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     //recursively
     display(a);
}  

