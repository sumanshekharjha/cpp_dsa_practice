#include<iostream>
using namespace std;

void linerSearch(int arr[], int item, int size){
    int pos=-1;

    for(int i=0;i<size;i++){
        if(arr[i]==item){
            pos=i;
            break;
        }
    }
   if(pos==-1){
     cout<<"Search Unsuccessful"<<endl;
   }else{
    cout<<"Element is found at index "<<pos<<" & position: "<<pos+1<<endl;
   }
}
int main(){
    int size,item;
    cout<<"Size of array: ";
    cin>>size;
     
    int arr[size];
    cout<<"Enter elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Elements are: ";
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter element to be searched: ";
    cin>>item;
    linerSearch(arr,item,size);
    return 0;
}