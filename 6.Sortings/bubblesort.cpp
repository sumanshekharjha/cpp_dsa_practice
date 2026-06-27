#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
       int swapped = 0;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

int main() {
    int size;
    
    cout<<"Enter size of array: ";
    cin>>size;

    int a[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
       cin>>a[i];
    }
    cout<<"Elements of array are: ";
    for(int i=0;i<size;i++){
       cout<<a[i]<<" ";;
    }cout<<endl;

    bubbleSort(a, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}


// time complexity: O(n^2) in worst case , O(n) in best case