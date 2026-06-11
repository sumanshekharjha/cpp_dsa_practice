#include <iostream>
using namespace std;
#include <climits>

int main(){

    { // 1
        //leetcode 867
        // transpose in new matrix

        //  int m;
        // cout<<"enter the no.of rows: ";
        // cin>>m;
        // int n;
        // cout<<"enter the no. of column: ";
        // cin>>n;
        // int arr[m][n];
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cin>>arr[i][j];
        //     }
        // }
        //  for(int i=0;i<m;i++){
        //             for(int j=0;j<n;j++){
        //                 cout<<arr[i][j]<<" ";
        //             }
        //             cout<<endl;
        //         }
        //   cout<<endl;
        //   int t[n][m];
        //     for(int i=0;i<n;i++){
        //         for(int j=0;j<m;j++){  
        //         t[i][j]=arr[j][i];
        //         }
        //     }
        //     //print transpose
        //     for(int i=0;i<n;i++){
        //         for(int j=0;j<m;j++){  
        //        cout<<t[i][j];
        //         }
        //     }

}
{ //2
    //transpose in same matrix
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
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

}

} 
