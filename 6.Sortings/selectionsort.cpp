#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,4,1,2};
    int n=5;
    for(int element : arr ){
        cout<<element<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int midx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                midx=j;
            }
        }
        swap(arr[i],arr[midx]);
        
    }
    for(int element : arr ){
        cout<<element<<" ";
    }
}

// time complexity:  O(n^2) in all case