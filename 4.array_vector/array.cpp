#include<iostream>
using namespace std;

// 1
// int main(){
//     int n,sum=0;
//     int arr[100];
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int size;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Array elements are: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         sum=sum+arr[i];
//     }
//         return 0;
// }

//2
// int main(){
// int ar[10]={1,2,3,4,5,6,7,8,9,10};
// int n=sizeof(ar)/sizeof(ar[0]);
// cout<<n<<endl;
// return 0;
// }

//3
// int main(){
//     int arr[5]={12,21,33,4,25};
// int max=arr[0];  or //int max=INT_MIN;
//     for(int i=0;i<5;i++){
//         if( max<arr[i]){
//             max=arr[i];
//         }
//     }
//      cout<<max;
//         return 0;
//     }

// 4
// int main(){
//     int arr[5]={12,21,-33,4,25};
// int max=arr[0],i;
// int sec_max=arr[0];  
//     for(i=0;i<5;i++){
//         if( max<arr[i]){
//             max=arr[i];
//         }
//     }
//      cout<<"maximum number: "<<max<<endl;
//         for(int i=0;i<5;i++){
//             if(arr[i]==max){
//                 continue;
//             }
//            else{
//            if(sec_max<arr[i]){
//              sec_max=arr[i];
//         }
//     }
//     }
//         cout<<"second max: "<<sec_max;
//         return 0;
//     }

// 5
// int main(){
// int ar[10]={1,2,3,4,5,6,7,8,9,10},count=0;
// for(int i=0;i<10;i++){
//         count++;
//     }
// cout<<count<<endl;
// return 0;
// }

// 6
// void arrays(int a[]){
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     } cout<<endl;
//     }
//     void change(int b[]){
//         b[0]=100;
//     }
//     int main (){
//         int arr[5]={1,3,4,6,7};
//         arrays(arr);
//         change(arr);
//         arrays(arr);
//     } 
 
   