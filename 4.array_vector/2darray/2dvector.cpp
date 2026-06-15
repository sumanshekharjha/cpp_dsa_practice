#include <iostream>
using namespace std;
#include <vector>
int main(){

//1. vector
// vector is a dynamic array
// increase your rows
// variable columns

//vector<vector<int>> v;
//vector<vector<int>> v1(int m); : initial size
//vector<vector<int>> v1( m, vector<int>(n)); :  

{

vector<int> v1(3);    // 1 2 3
// v1. push_back(1);
// v1. push_back(2) ;
// v1. push_back (3) ;
v1[0]=1;
v1[1]=2;
v1[3]=3;

vector<int> v2; // 4 5
v2.push_back(4);
v2.push_back(5);

vector<int> v3; // 6 7 8 9 10 
v3. push_back (6); 
v3. push_back(7); 
v3. push_back(8);
 v3. push_back (9); 
 v3. push_back(10);

vector<vector<int> > v; //{ {1,2,3}, {4,5}, {6,7,8,9, 10}};
v. push_back (v1);
v. push_back(v2) ;
v. push_back (v3);

cout<<v[0][3]<<endl; 
cout<<v[0][1]<<endl;
cout<<v1[1]<<endl;

}

{
vector<vector<int>> v(3, vector<int>(4,2)); // 3rows and 4 columns with initial value 2

cout<<v.size()<<endl;
cout<<v[0].size()<<endl;
cout<<v[2][2]<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

}


}