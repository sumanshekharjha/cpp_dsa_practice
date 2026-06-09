#include <iostream>
using namespace std;
#include <climits>
//2d arrays are also called  array of arrays
int main(){

// initialisations
    //int arr[rows][column];

    // int arr[5][8]={{1,2,3},{4,5,6},{23,54,12}};
    // cout<<arr[0][2];
        
//int arr[4][2] = {{123,34},{56,33},{67,9},{47,88}};
// int arr1[][2] = {{13,34},{56,333},{67,91},{47,838}};
// int arr2[3][3] = {1,2,3,4,5,6,7,8,9};


{ // 1
    //traversal

        //  int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
        //  for(int i=0;i<=2;i++){
        //     cout<<arr2[0][i]<<" ";       //0th row
        //  }
        //   for(int i=0;i<=2;i++){
        //     cout<<arr2[1][i]<<" ";       //1st row
        //  }
        //   for(int i=0;i<=2;i++){
        //     cout<<arr2[2][i]<<" ";       //2nd row
        //  }
 
        //  for(int i=0;i<=2;i++){
        //     for(int j=0;j<=2;j++){
        //         cout<<arr2[i][j]<<endl;
        //     }
        //  }
}

{ // 2
    //taking input

        // int m;
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
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        // }
}

{ // 3

        // int arr[2][4];     //2-roll,4-marks
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<4;j++){
        //         cin>>arr[i][j];
        //     }
        // }

        // for(int i=0;i<2;i++){
        //     for(int j=0;j<4;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

}

{ // 4
   // largest element of 2d array

        //    int arr[3][3] = {{23,45,67},{65,13,55},{47,72,46}};
        //    int max = INT_MIN;
        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //        if(max<arr[i][j])
        //        max=arr[i][j];
        //     }
        
        // }
        // cout<<"max: "<< max;

}

{ // 5
    //sum of all elements

        // int arr[3][3] = {{1,2,3},{4,4,4},{7,7,6}};
        // int sum=0;
        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //     sum += arr[i][j];
        //     }
        // }
        // cout<<"sum: "<<sum;
}
{ // 6
    // Add two matrix
        // order should be same for addition
        // int a1[2][3] = {{1,2,3},{4,5,6}};
        // int a2[2][3] = {{8,9,10},{13,21,11}};
        // int res[2][3];
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<3;j++){
        //         res[i][j] = a1[i][j] + a2[i][j];
        //     }
        // }

//if no extra array then cout<<a1[i][j] + a2[i][j];
//if in any one of them..:   a1[i][j] = a1[i][j] +  a2[i][j]

}

{ // 7
    //input and store in new matrix 
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
        //      //transpose
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
{ //8
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
    

}
} 