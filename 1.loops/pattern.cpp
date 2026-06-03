#include<iostream>
using namespace std;

int main(){
//Patterns

        //FIRST
        int n1;
        cout<<"enter n1";
        cin>>n1;
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n1;j++){
                cout<<j;
            }
            cout<<endl;
        }

        //SECOND
        int n2;
        cout<<"enter n2";
        cin>>n2;
        for(int i=1;i<=n2;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        ////THIRD
        int n3;
        cout<<"enter n3";
        cin>>n3;
        for(int i=1;i<=n3;i++){
            for(int j=1;j<=n3+1-i;j++){
                cout<<" ❤️ ";
            }
            cout<<endl; 
        }

        //FOURTH
        int n4;
        cout<<"enter n4";
        cin>>n4;
        for(int i=1;i<=n4;i++){
            for(int j=1;j<=n4;j++){
                cout<<i;
            }
            cout<<endl;
        }

        //FIFTH
        int n5;
        cout<<"enter n5";
        cin>>n5;
        for(int i=1;i<=n5;i++){
            for(int j=1;j<=i;j++){
                cout<<2*j-1;
            }
            cout<<endl;
        }

        //SIXTH
        int n6;
        cout<<"enter n6";
        cin>>n6;
        int mid = n6 / 2 + 1;
        for(int i=1;i<=n6;i++){
            for(int j=1;j<=n6;j++){
                if(i==mid || j==mid){
                    cout<<"*";
                }else{ cout<<" ";
                }
                } 
            cout<<endl;
            }

        //SEVENTH
        int n7;
        cout<<"enter n7";
        cin>>n7;
        int k=1;
        for(int i=1;i<=n7;i++){
            for(int j=1;j<=i;j++){
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }

        //EIGHTH
        int n8;
        cout<<"enter n8";
        cin>>n8;
        int a=1;
        for(int i=1;i<=n8;i++){
            if(i%2!=0){
                a=1;
            }else{
                a=0;
            }
            for(int j=1;j<=i;j++){
                cout<<a;
                if(a==1) a=0;
                else a=1;
            }
            cout<<endl;
        }

        //NINTH
        int n9;
        cout<<"enter n9";
        cin>>n9;
        for(int i=1;i<=n9;i++){
            for(int j=1;j<=n9-i;j++){
            cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";  
        }
        cout<<endl;
        }

        //TENTH
        int n10;
        cout<<"enter n10";
        cin>>n10;
        for(int i=1;i<=n10;i++){
        for(int j=1;j<=n10-i;j++){
            cout<<" ";
            }
            for(int k=1;k<=n10;k++){
                cout<<"*";    
        }
        cout<<endl;
        }

        //ELEVENTH
        int n11;
        cout<<"enter n11";
        cin>>n11;
        for(int i=1;i<=n11;i++){
        for(int j=1;j<=n11-i;j++){
            cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";  
        }
        cout<<endl;
        }

        //ELEVENTH
            int n12;
        cout<<"enter n";
        cin>>n12;
        int nst= 1;
        int nsp=n12-1;
        for(int i=1;i<=n12;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
            }
            nsp--;
            for(int k=1;k<=nst;k++){
                cout<<"*";  
        }
        nst+=2;
        cout<<endl;
        }
return;
}