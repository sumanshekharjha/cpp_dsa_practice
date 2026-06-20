#include <iostream>
using namespace std;

int main(){

{
    char ch = 'q';    //character
    char str[5] = {'a','b','c','d','e'};   //character array
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<"this is a string"<<endl;
}

{
    char str[] = {'a','b','c','d','e'};

    cout<<str[4]<<endl;
    cout<<(int)str[5]<<endl;

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    cout<<str;
}

{
  cout<<endl;
char str[] = {'a','b','c','\0','d','e'};

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
}

return 0;
}