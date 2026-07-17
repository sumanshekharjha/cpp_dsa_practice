#include<iostream>
using namespace std;

// void fun(int n){
//     if(n==0) return;
//     cout<<"Hello everyone"<<endl;
//     fun(n-1);
// }
// int main(){
//  fun(4);
// }

// int fact(int n){
//     if(n==1 || n==0) return 1;
//  return n* fact(n-1);
// }
// int main(){
//     cout<<fact(5);
// }

//  print n to 1
// void prints(int n){
//  if(n==0) return;
//  cout<<n<<" ";
//  prints(n-1);
// }
// int main(){
//     prints(7);
// }


//Print 1 to n
// void prints(int i,int n){
//     if(i>n) return;
//  cout<<i<<" ";
//  prints(i+1,n);
// }
// int main(){
// prints(1,6);
// }

//Print 1 to n using single parameter
// void prints(int n){
//  if(n==0) return;
//  prints(n-1);
//  cout<<n<<" ";
// }
// int main(){ 
//     prints(5);
// }

//print sum parameterised
// void sums(int sum,int n){
//     if(n==0) { cout<<sum<<" ";
//         return;
//     }
//  sums(sum+n,n-1);
// }
// int main(){
//     sums(0,10);
// }

// int sums(int n){
//     if(n==0)  return 0;
//     return n + sums(n-1);
// }
// int main(){
//     cout<<sums(10);
// }

//fibonacci
// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     cout<<fib(5);
// }   

// int pow(int x,int n){
//     if(n==0) return 1;
//     return x*pow(x,n-1);
// }
 
//Stair path: n stairs but person can climb 1 or 2 at a time.
//no. of ways to reach
// int stair(int n){
//     if(n==2) return 2;
//     if(n==1) return 1;
//     return stair(n-1) + stair(n-2);
// }
// int main(){
//     cout<<stair(5);
// }

// Maze path
// int maze(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec){
//         return 0;
//     }
//     if( sc==ec||sr==er) return 1;
//     int right = maze(sr,sc+1,er,ec);
//     int down = maze(sr+1,sc,er,ec);
//     int total = right + down;
//     return total;
// }
// void printPath(int sr,int sc,int er,int ec,string s){
// if(sr>er || sc>ec){
//         return ;
//     }
//     if( sc==ec && sr==er) {
//         cout<<s<<endl;
//         return;
//     }
//     printPath(sr,sc+1,er,ec,s+'R');
//     printPath(sr+1,sc,er,ec,s+'D');
   
// }
// int main(){
//     //cout<<maze(1,1,5,5);
//     printPath(1,1,3,3,"");
// }

