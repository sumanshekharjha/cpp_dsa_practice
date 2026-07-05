#include<iostream>
using namespace std;
int main() {
int arr [9] = {1,2,4,5,9,15, 18, 21,24};
int n = 9;
int x = 12;

int l=0,h=n-1;

bool flag=false;
while(l<=h){
     int mid= l+(h-l)/2;
 if(arr[mid]==x){
    flag=true;
    cout<<arr[mid-1];   
    break;
 }   
 else if(arr[mid]<x){
    l=mid+1;
 }
 else if(arr[mid]>x){
   h=mid-1;
 } 
}
if(flag==false) cout<<arr[h];
}