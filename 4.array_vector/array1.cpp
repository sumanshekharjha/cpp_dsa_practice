#include<iostream>
#include<cstdlib>
#define MAXSIZE 100
using namespace std;

int arr[ MAXSIZE ];
void create_array(int);
void display();
void insert_array(int,int);
int delete_array(int);
int size=0;

int main(){
    int ch,pos,item,data;
     cout<<"array operation"<<endl;
        cout<<"1.creating an array"<<endl;
        cout<<"2.display the array on screen"<<endl;
        cout<<"3.insert an element in array "<<endl;
        cout<<"4.delete an element from array"<<endl;
        cout<<"5.exit"<<endl;

    while(1){
        

        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"enter the size,maxsize is"<<MAXSIZE<<endl;
                cin>>size;
                create_array(size);
                break;
            case 2:
                display();
                break;
            case 3:
                cout<<"enter the position and element: "<<endl;
                cin>>pos>>item;
                insert_array(pos,item);
                break;
            case 4:
                cout<<"enter the position: "<<endl;
                cin>>pos;
                data = delete_array(pos);
                cout<<"deleted element is: "<<data<<endl;
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"invalid choice"<<endl;
        }

    }
    return 0;
}

void create_array(int size){
    if(size<0 || size>MAXSIZE){
        cout<<"array can't be created"<<endl;
         }else{
        cout<<"enter the elements of array:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
            cout<<"array created"<<endl;
           
    }
}

void display(){
    if(size==0){
        cout<<"array is empty"<<endl;
        return;
    }else{
        cout<<"array is: "<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    }

    void insert_array(int pos,int item){
        if(size==MAXSIZE){
            cout<<"can't insert element:array overflow"<<endl;
        }
        else if(pos<0 || pos>size){
            cout<<"invalid position"<<endl;
            return;
        }
        else{
            for(int i=size-1;i>=pos-1;i--)
                arr[i+1] = arr[i];
            arr[pos-1] = item;
            size++;
            cout<<"element inserted"<<endl;
        }
            }
            
            int delete_array(int pos){
                int data;
                if(size==0){
                    cout<<"can't delete element:array underflow"<<endl;
                }
                else if(pos<0 || pos>size){
                    cout<<"invalid position"<<endl;
                }
                else{
                    data = arr[pos-1];
                    for(int i=pos;i<=size-1;i++)
                        arr[i-1] = arr[i];
                    size--;
                }
                return data;
            }