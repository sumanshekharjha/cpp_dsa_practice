#include<iostream>
using namespace std;



    // 1
    int main(){
    int x=4;
    int *p=&x;
    cout<<p<<endl;
    cout<<*p << endl;
    cout<<&x<<endl;
    return 0;
   }

    // 2
    int main(){
     int x,y;
        int *p1=&x;
        int *p2=&y;
        cout<<"enter 1st number"<<endl;
        cin>>*p1;
        cout<<"enter 2nd number"<<endl;
        cin>>*p2;
        cout<<"sum is "<<*p1+*p2<<endl;
        return 0;
    }
    

         // 3
        void swap(int* x, int* y){
            int  temp= *x;
            *x=*y;
            *y=temp;
            return;
        }
        int main(){
           int a=6, b=9;
            swap(&a,&b);
            cout<<a<<" "<<b<<endl;
            return 0;
        }

    // 4
            void swap(int &x, int &y){
                int  temp= x;
                x=y;
                y=temp;
                return;
            }
            int main(){
               int a=6, b=9;
                swap(a,b);
                cout<<a<<" "<<b<<endl;
                return 0;
            }


 

