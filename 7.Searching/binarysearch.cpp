#include <iostream>
using namespace std;

int binarySearch(int arr[], int item, int size){
    int lowbound=0;
    int upbound=size-1;
    int mid;
    while(lowbound<=upbound){
        mid=lowbound+(upbound-lowbound)/2;

        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]>item){
            upbound=mid-1;
        }
        else{
            lowbound=mid+1;
        }
    }
    return -1;
}
int main() {
    int size, item;
    cout<< "size of array: ";
    cin >> size;

    int arr[size];
    
    cout<<"enter elements in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout<<"Elements are: ";
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element to be searched: ";
    cin >> item;

    int val = binarySearch(arr, item, size);

    if (val == -1) {
        cout << "Not Found";
    } else {
        cout << "Item is at position " << val + 1;
    }

    return 0;
}
