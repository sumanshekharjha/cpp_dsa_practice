#include<iostream>
using namespace std;

// 1
// void greeting(){
//     cout << "Hello, welcome to the program!" << endl;
//     cout<<"good morning"<<endl;
// }
// int main(){
//     greeting(); 
//     greeting();
//     return 0;
// }

//----------------------------------//

// 2
// void starTriangle(int x){
// for(int i=1;i<=x;i ++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl; 
// }
// }
// int main(){
//     starTriangle(3);
//     starTriangle(5);
//     starTriangle(7);
//     return 0;
// }
 
//----------------------------------//

// 3
// int sum(int x,int y){
//     return x + y;
// }
// int main(){
//     cout<<sum(76,77);
//     return 0;
// }

//----------------------------------//


// 4
// int min(int x,int y){
//     int a;
//     if(x>y) a=y;
//     else a=x;
//     return a;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<min(x,y);
//     return 0;
// }

//----------------------------------//

// 5
// int facto(int x){
//     int fact=1;
//    for(int i=1;i<=x;i++){
//     fact=fact*i;
//    }  
//    return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<facto(n);
//     return 0;
// }
 
//----------------------------------//


// 6
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f=f*i;
//      } 
//     return f;   
// } int ncrn(int n, int r){
//     int ncr= fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// } int main(){
//     int n,r;
//     cout << "Enter a n: ";
//     cin >> n;
//     cout<<"Enter a r: ";
//     cin>>r;
//      int ncr= ncrn(n,r);
//     cout<<n<<"C"<<r<<"is:"<<ncr<<endl;
//     return 0;
// }

//----------------------------------//


// 7  
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f=f*i;
//      } 
//     return f;       
// }
// int combination(int n, int r){
//     int ncr = fact(n) / (fact(r) * fact(n - r));
//     return ncr;
// }
// int main(){
//     int n;
//     cout << "Enter a value for n: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<combination(i,j)<<" ";
//     }
//         cout<<endl;
// }
//     return 0;
// }

//----------------------------------//


// 8
//  int gcd(int a,int b){
//     int hcf=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//         hcf=i;
//     }
//  }
//  return hcf;
//  }
//  int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout<<"HCF of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
//     return 0;
//  }

//----------------------------------//

// 9
// void swap(int a,int b){
//     int temp =a;
//     a=b;
//     b=temp;
//     cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
// }
// void swapping(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
// }
// int main(){
//     int x, y;
//     cout << "Enter x & y numbers: ";
//     cin >> x >> y;
//     int c,d;
//     cout<< "Enter c & d numbers: ";
//     cin >> c >> d;
//     cout << "Using swap function:" << endl;
//     swap(x, y);   
//     cout << "Using swapping function:" << endl;
//     swapping(c, d);
//     return 0;
// }