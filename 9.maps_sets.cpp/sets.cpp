#include<iostream>
using namespace std;
#include<unordered_set>
#include<set>
// int main(){
    // unordered_set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(1);
    // s.insert(5);
    // //for each loop
    // for(int x:s){
    //     cout<<x<<" ";
    // }
    // int target=6;
    // if(s.find(target)!=s.end()){
    //     cout<<"found";
    // }
    // else cout<<"not found";

//}

// LEETCODE 2442
   //count no.of distinct
//    int countdistinct(vector<int>&nums){
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         int rev=reverse(nums[i]);  //make reverse function
//         nums.push_back(rev);
//     }
//     unordered_set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(nums[i]);
//     }
//     return s.size();
//    }
// or s.insert(nums[i]); s.insert(rev); return s.size();

//LEETCODE 2744

// int maximumstringpairs(vector<string>& arr){

// unordered_set<string> s;
// int count=0;
// for(int i=0;i<arr.size();i++){
//     string str=arr[i];
//     reverse(str.begin(),str.end());
//     if(s.find(str)!=s.end()){
//         count++;
//     } 
//         else{
//             s.insert(arr[i]);
//         }
    
// }
// return count;
// }

int main(){
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    for(int x:s){
        cout<<x<<" ";
    }
}


