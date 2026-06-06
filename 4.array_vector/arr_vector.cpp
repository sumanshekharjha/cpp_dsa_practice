#include <iostream>
using namespace std;
#include <vector>

// 1.  Sort array of 0s and 1s
      //  A.) Two pass method
      //  int main(){
      //  vector<int> v;
      //  v.push_back(1);
      //  v.push_back(0);
      //   v.push_back(0);
      //   v.push_back(1);
      //  v.push_back(0);
      //   v.push_back(1);
      //    v.push_back(1);
      //    v.push_back(0);
      //    for(int i=0;i<v.size();i++){
      //      cout<<v[i]<<" ";
      //    }
      //    cout<<endl;
      //    int noZ=0;
      //    int noO=0;
      //    for(int i=0;i<v.size();i++){
      //     if(v[i]==0)noZ++;
      //      else noO++;
      //    }
      //    for(int i=0;i<v.size();i++){
      //      if(i<noZ)
      //      v[i]=0;
      //      else v[i]=1;
      //    }
      //    for(int i=0;i<v.size();i++){
      //      cout<<v[i]<<" ";
      //    }
      //  }
     // B.) Two Pointer Method
     // int main(){
     // vector<int> v;
     //   v.push_back(1);
     //    v.push_back(0);
     //    v.push_back(0);
     //      v.push_back(1);
     //    v.push_back(0);
     //     v.push_back(1);
     //      v.push_back(1);
     //     v.push_back(0);
     //     int n = v.size();
     //  int i = 0;
     //  int j = n - 1;
     //   while(i<j){
     //      if(v[i]==0){
     //           i++;
     //           }
     //            else if(v[j]==1){
     //           j--;
     //           }        
     //           else if(v[i]==1 && v[j]==0){
     //             v[i]=0;
     //                 v[j]=1;
     //           i++;
     //           j--;
     //           }
     //      }
     //      for(int i=0;i<v.size();i++){
     //           cout<<v[i]<<" ";
     //      }
     //   }
      
//2.   Sort the array of 0s,1s and 2s (leetcode 75)
       //two pass algo
    //     void sortColors(vector<int>& nums) {
    //         int no0=0;
    //         int no1=0;
    //         int no2=0;
    //       for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0) no0++;
    //         if(nums[i]==1) no1++;
    //           else no2++;
    //       }
    //       for(int i=0;i<nums.size();i++){
    //         if(i<no0)
    //         nums[i]=0;
    //         else if(i<no1+no0)
    //         nums[i]=1;
    //         else nums[i]=2;
    //       }
    //     }
    //      //three pointer method
    //    void sortColors(vector<int>& nums) {
    //     int low = 0;
    //     int mid = 0;
    //     int high = nums.size()-1;
    //     while(mid<=high){
    //     if(nums[mid]==0){
    //       swap(nums[low],nums[mid]);
    //       low++;
    //       mid++;
    //     }
    //     if(nums[mid]==1){
    //       mid++;
    //     }
    //     if(nums[mid]==2){
    //       swap(nums[high],nums[mid]);
    //     }
    //   }
    //  }

//3.   merge to sorted arrays
      // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      //   int i=0,j=0,k=0;
      //   vector<int> res(m+n);
      //   while(i<m && j<n){
      //       if(nums1[i]<=nums2[j]){
      //           res[k]=nums1[i];
      //           i++;
      //       }else{
      //           res[k] = nums2[j];
      //           j++;
      //       }
      //       k++;
      //   }
      //       while(j<n){
      //           res[k]=nums2[j];
      //           k++;
      //           j++;
      //       }   
      //       while(i<m){
      //           res[k] = nums1[i];
      //           i++;
      //           k++;
      //       }
      //   nums1 = res;
      //   }
      // int main(){
      //   vector<int> arr1;
      //    arr1. push_back(1) ; 
      //    arr1. push_back(4); 
      //    arr1.push_back(5);
      //    arr1. push_back(8);
      //   for (int  i = 0; i < arr1.size(); i++){
      //      cout<<arr1[i]<<" ";
      //   }
      //     vector<int> arr2;
      //     arr2. push_back(2) ;
      //     arr2.push_back (3);
      //     arr2. push_back(6);
      //     arr2.push_back(7);
      //     arr2.push_back(10);
      //     arr2.push_back(12);
      //         for (int  i = 0; i < arr2.size(); i++){
      //      cout<<arr2[i]<<" ";
      //   }
      //     vector<int> v = merge(arr1,arr2);
      //      for (int  i = 0; i < v.size(); i++){
      //      cout<<v[i]<<" ";
      //   }
      //   }

//4. next permutation (leetcode 31)
      // void nextPermutation(vector<int>& nums) {
      //     int idx=-1;
      //      int n = nums.size();
      //     for(int i=n-2;i>=0;i--){
      //         if(nums[i]<nums[i+1]){
      //             idx=i;
      //             break;
      //         }
      //     }
      //     if(idx ==-1){
      //       reverse(nums.begin(),nums.end());
      //       return;
      //     }      
      //       else   reverse(nums.begin()+idx+1,nums.end());
      //     int j=-1;
      //     for(int i=idx+1;i<n;i++){
      //         if(nums[i]>nums[idx]){
      //             j=i;
      //             break;
      //         }
      //     }
      //     int temp = nums[idx];
      //     nums[idx] = nums[j];
      //     nums[j] = temp;
      // }

//5.leetcode 283 move zeroes to end
    // void moveZeroes(vector<int>& nums) {
    //  int j=0;
    //  for(int i=0;i<=nums.size()-1;i++){
    //     if(nums[i]!=0){
    //         nums[j]=nums[i];
    //         j++;
    //     }
    //  } 
    //  for(int i=j;i<=nums.size()-1;i++){
    //     nums[i]=0;
    //  }
    // }

//6.leetcode 1365
      // vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      //       vector <int> arr(nums.size());
      // for (int i=0;i<nums.size();i++){
      //       int count=0;
      //       for(int j=0;j<nums.size();j++){
      //             if(nums[i]>nums[j]){
      //             count++;
      //             }
      //       }
      //       arr[i]=count;
      // }  
      // return arr;
      // }
    
