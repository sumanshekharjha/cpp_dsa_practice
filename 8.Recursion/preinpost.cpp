#include<iostream>
using namespace std;

// void pip(int n){
//     if(n==0) return;
//     cout<<"pre"<<n<<endl;
//     pip(n-1);
//     cout<<"In"<<n<<endl;
//     pip(n-1);
//     cout<<"post"<<n<<endl;
// }
// int main(){
//     pip(3);
// }

void zigzag(int n){
    if(n==0) return;
    cout<<"pre"<<n<<endl;
    zigzag(n-1);
    cout<<"In"<<n<<endl;
    zigzag(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    zigzag(3);
} 