#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>

// int main(){
//     pair<int,int> m;
//     m.first=2;
//     m.second=3;
//     cout<<m.first<<" "<<m.second;
// }

// int main(){
//     unordered_map<string,int> m; 
//     pair<string,int> p1;
//     p1.first = "raghav";
//     p1.second = 76;
//     m.insert(p1);
//     for(pair<string,int> p1:m){

//     }
// }
// int main(){
// map<int,int> m;
// m[1]=30;

// m[3]=10;
// m[2]=20;
// for(auto& i:m){
//     cout<<i.second<<" ";
// }
// }

//LEETCODE 1657
// class Solution {
// public:
//     bool closeStrings(string word1, string word2) {
//         unordered_map<char,int> mp1,mp2;

//         if(word1.length()!=word2.length())
//         return false;
//         for(int i=0;i<word1.length();i++){
//             mp1[word1[i]]++;
//             mp2[word2[i]]++;
//         }
        
//         unordered_map<int,int> h1,h2;

//         for(auto x:mp1){
//             char ch=x.first;
//             char ch1=x.second;
//             if(mp2.find(ch)==mp2.end()) return false;
//             else{
//                 h1[ch1]++;
//             }
//         }
//         for(auto x:mp2){
//              char ch=x.second;
//             h2[ch]++;
//         }
//         for(auto x:h1){
//             int c=x.first;
//             if(h2.find(c)==h2.end()) return false;
//             if(h1[c]!=h2[c]) return false;
//         }
//         return true;
//     }
// };


//LEETCODE 1814
// int reve(int n){
//     int rev=0;
//     while(n>0){
//     int a=n%10;
//     rev=rev*10 + a;
//     n/=10;
//     }
//     return rev;
//  }
//     int countNicePairs(vector<int>& nums) {
//         int count = 0;
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//           nums[i]=nums[i]-reve(nums[i]);
//         }
//         for(int i : nums){
//         int ch = i;
//         if(mp.find(ch) == mp.end())
//             mp[ch] = 1;
//         else{
//             count=count%1000000007;   // GIVEN in rule
//             count += mp[ch];
//             mp[ch]++;
//         }
//     }
//         return count%1000000007;
//  }

//leetcode 2094
// vector<int> findEvenNumbers(vector<int>& digits) {
//         unordered_map <int,int> mp;
//         for(int i:digits){
//             mp[i]++;
//         }
//         vector<int> ans;
//         for(int i=100;i<=999;i+=2){
//             int x=i;
//             int a = x%10;
//             x=x/10;
//             int b=x%10;
//             x=x/10;
//             int c=x%10;
//             if(mp.find(a)!=mp.end()){
//                 mp[a]--;
//                 if(mp[a]==0) mp.erase(a);
//                 if(mp.find(b)!=mp.end()){
//                     mp[b]--;
//                     if(mp[b]==0) mp.erase(b);
//                     if(mp.find(c)!=mp.end())
//                     ans.push_back(i);   
//                     mp[b]++;
//                 }
//                 mp[a]++;
//             }
//         }
//         return ans;
//     }


//Leercode 560
// int subarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int> pre(n);
//         unordered_map<int,int> mp;

//         int count=0;
//         pre[0]=nums[0];
//         for(int i=1;i<n;i++){
//             pre[i]=nums[i]+pre[i-1];
//         }
//         for(int i=0;i<n;i++){
//             if(pre[i]==k) count+=1;
//             int rem = pre[i]-k;
//             if(mp.find(rem)!=mp.end()){
//                 count+=mp[rem];       //Add frequency of rem 
//             } 
//             mp[pre[i]]++;
//         }
//         return count;
//     }