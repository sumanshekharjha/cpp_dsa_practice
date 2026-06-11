#include <iostream>
using namespace std;
#include <climits>

int main(){
// leetcode 48
//rotate the matrix by 90 deg
//transpose then reverse

 int m;
    cout<<"enter the no.of rows/column: ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    cout<<endl;
    
for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
        //swap i,j with j,i
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
}
for(int k=0;k<m;k++){
    int i=0;
    int j=m-1;
    while(i<=j){
        int temp = arr[k][i];
        arr[k][i] = arr[k][j];
        arr[k][j] = temp;
    }
}
}