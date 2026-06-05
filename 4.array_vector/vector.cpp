#include<iostream>
using namespace std;
#include<vector>

 //1
//     vector<int> v;
//     v.push_back(5);
//      v.push_back(52);
//       v.push_back(15);
//        v.push_back(66);
//        v.push_back(51);
//      v.push_back(2);
//       v.push_back(35);
//        v.push_back(6);
//         v.push_back(33);
//       v.push_back(17);
//       v.pop_back();
//        cout<<v.size()<<endl;
//        cout<<v.capacity()<<endl;
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        } 
//         for(int i=0;i<v.capacity();i++){   //no output
//         cout<<v[i]<<" ";
//        }
// }

//2
// vector<int> v(5);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;

//3
// vector<int> v(5,7); // size=5;each element =7
// cout <<v.size()<<endl;
// cout<<v[4]<<endl;
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
// }


// 4 
// size is given
// vector<int> v(5);
// for(int i=0;i<5;i++){
//     cin>>v[i];
// }
// for(int i=0;i<5;i++){
//     cout<<v[i];
// }
// }

//5
//size is not given
// vector<int> v;
// int n;
// cout<<"Enter size ";
// cin>>n;
// for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
// }
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }
// }

//6
// vector<int> v;
// v.push_back(4);
// v.push_back(12);
// v.push_back(13);
// v.push_back(11);
// for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// } cout<<endl;
// cout<<v.at(2)<<endl;
// v.at(2)=100;
// cout<<v.at(2)<<endl;
// sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }
// }

//7 passing vector to function
  //pass by value
// void change(vector<int> a){
//     a[0]=100;
//     for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
// }
// }
// int main(){
// vector<int> v;
//      v.push_back(5);
//      v.push_back(52);
//       v.push_back(15);
//        v.push_back(66);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
//     change(v);
//     for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

//8 pass by reference
// void change(vector<int>& a){
//     a[0]=100;
// }
// int main(){
// vector<int> v;
//      v.push_back(5);
//      v.push_back(52);
//       v.push_back(15);
//        v.push_back(66);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
//     change(v);
//     for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

//9
// int main(){
// vector<int> v;
//     v.push_back(5);
//      v.push_back(51);
//       v.push_back(15);
//        v.push_back(66);
//        v.push_back(51);
//      v.push_back(2);
//      int idx=-1,x=51;
//  for(int i=v.size()-1;i>=0;i++)
//    if(v[i]==x) {
//       idx=i;
//     cout<<idx;
//    break;
//    }
// }
// }

//10. TWO SUM
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter array elements: ";
//     for(int i=0;i<n;i++){
//         int y;
//         cin>>y;
//         v.push_back(y);
//     }
//     int x;
//     cout<<"enter target: ";
//     cin>>x;
//     for(int i=0;i<v.size()-1;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){ 
//                 cout<<i<<","<<j<<endl;
//             }
//         }
// }
// }

//11
// creating another array but reversed
// void display(vector<int>& a){
//     for(int i=0;a.size();i++){
//     cout<<a[i]<<" ";
//     }cout<<endl;
// }   
// int main(){
//     vector<int> v1;
//       v1.push_back(5);
//        v1.push_back(3);
//         v1.push_back(4);
//          v1.push_back(12);
//           v1.push_back(15);
//           display(v1);
//           vector<int> v2(v1.size());
//           for(int i=0;i<v2.size();i++){
                //(i+j=v.size()-1)
//             int j=v1.size()-1-i;       
//             v2[i]=v1[j];  
//           }
// }

//12  reverse the array without using any extra array
// two pointer is used and  one from start and another from 
 // end and element swapped
// void display(vector<int>& a){
//     for(int i=0;a.size();i++){
//     cout<<a[i]<<" ";
//     }cout<<endl;
// }   
// int main(){
//     vector<int> v1;
//       v1.push_back(5);
//        v1.push_back(3);
//         v1.push_back(4);
//          v1.push_back(12);
//           v1.push_back(15);
//           display(v1);
//     int i=0;
//     int j=v1.size()-1;
//     while(i<=j){            //for(int i=0,j=v.size()-1;i<=j;i++,j--)
//         int temp=v1[i];
//         v1[i]=v1[j];
//         v1[j]=temp;
//         i++;
//         j--;
//     }
//     display(v1);
// }


//13. reverse the part of array. 
// void display(vector<int>& a){
//     for(int i=0;a.size();i++){
//     cout<<a[i]<<" ";
//     }cout<<endl;
// } 
// void reversePart(int i,int j,vector<int>& v){
// while(i<=j){
//     int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
// }
// return;
// }  
// int main(){
//     vector<int> v1;
//       v1.push_back(5);
//        v1.push_back(3);
//         v1.push_back(4);
//          v1.push_back(12);
//           v1.push_back(15);
//         reversePart(1,3,v1);
//          display(v1);
// }

//14. Rotate array.    letcode 189
//rotate the array by k steps
// if k=2 then rotate by 2 steps
// 5 7 3 1 2 ,2 se rotation means 1 2 5 7 3
// k=4 => 7 3 1 2 5
// void reversePart(int i,int j,vector<int>& v){
// while(i<=j){
//     int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
// }
// return;
// }  
// void display(vector<int>& a){
//     for(int i=0;a.size();i++){
//     cout<<a[i]<<" ";
//     }cout<<endl;
// } 
// int main(){
//   int k;
//   cin>>k;
//   vector <int> v;
//       v.push_back(5);
//      v.push_back(52);
//       v.push_back(15);
//        v.push_back(66);
//        v.push_back(51);
//      v.push_back(2);
//       v.push_back(35);
//        v.push_back(6);
//         v.push_back(33);
//   int n=v.size();
//  if(k>n) k=k%n;
//   reversePart(0,n-k-1,v);
//   reversePart(n-k,n-1,v);
//   reversePart(0,n-1,v);
//   display(v);
// }

