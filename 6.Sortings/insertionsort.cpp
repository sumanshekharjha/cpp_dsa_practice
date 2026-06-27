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

 for(int i=1;i<=n-1;i++){
    int j=i;
    while(j>=1){
        if(arr[j]>=arr[j-1]) break;
        else{
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
 }
 for(int element : arr ){
        cout<<element<<" ";
    }
    cout<<endl;


}