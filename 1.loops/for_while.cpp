#include<iostream>
using namespace std;

int main() {

        //For Loops
{
   // MULTIPLICATION TABLE
    int n, i;
    cout<<"enter n";
     cin>>n;
    for(i=1; i<=10; i++) {
        int c=n * i;
     cout<<n<<"*"<<i<<"="<<c<<endl;
     } 
}
    
{
    // arithmetic progression
     int n, i;
    cout<<"enter n";
     cin>>n;
    int a=1,diff;
     cout<<"enter diff:";
       cin>>diff;
    for(i=1;i<=n;i++){
        int t=a+(i-1)*diff;
        cout<<t<<" ";
    }
}

{
   //geometric progression
   int a=1,r,n;
   cout<<"enter n:";
    cin>>n;
   cout<<"enter r:";
    cin>>r;
    for(int i=1;i<=n;i++){

        a=a*r;
        cout<<a<<" ";
    }
}

{     int i,a;
    cout<<"enter a:";
    cin>>a;

    for(int i=a;i>0;i=i-3){
        cout<<i<<" ";
    }
}

         //WHILE LOOPS
{
        int x=1;
        while(x==1){
            x=x-1;        
            cout<<x;
        }
}

{
       //ASCII value
       int i=65;
       while(i<=90){
           cout<<(char)i<<i<<" ";
       i++; 
       }
}

{
        //Print no. check
        int n;
        cout<<"enter n";
        cin>>n;
        bool flag=true;
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                flag=false;
              break;
            }
        }
        if(n==1) cout<<"neither composite nor prime";
        else if(flag==true) cout<<"prime";
        else cout<<"not prime";
}

{
            // //Count Digits
            int n,count=0;
            cout<<"enter n";
            cin>>n;
            while(n!=0){
                n=n/10;
                count++;
            }
            cout<<count;
}

{
            //SUM OF DIGITS
            int n;
            cout<<"enter n";
            cin>>n;
            int sum=0;
            while(n!=0){
                int a=n%10;
                sum=sum+a;
                n=n/10;
            }
            cout<<"sum of digits is: "<<sum<<endl;
}

{
            //REVERSE A NUMBER
             int n,rev=0;
             cout<<"enter n";
             cin>>n;
             while (n!=0){
                int a=n%10;
                rev=rev*10+a;
                n=n/10;
            }
                cout<<"reverse is: "<<rev<<endl;

}

{
            // //1-2+3-4+5-6+7-8+9-10
            int n,sum=0;
            cout<<"enter n";
            cin>>n;
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    sum=sum-i;
                }else{
                    sum=sum+i;
                }
            }
            cout<<"sum is: "<<sum<<endl;
}

{
            //FACTORIAL
            int n;
            int f=1;
            cout<<"enter n";
            cin>>n;
            for(int i=n;i>=1;i--){
                f=f*i;
            }
            cout<<"factorial is: "<<f<<endl;
}

{
            //FIBONACCI
            int n,a=0,b=1,sum=0;
            cout<<"enter n";
            cin>>n;
            for(int i=1;i<=n-2;i++){
                sum=a+b;
                a=b;
                b=sum;  
            }
             cout<<sum<<" ";
}

{
            //POWER 
            int a,b;
            cout<<"enter base a and power b";
            cin>>a>>b;
            int power=1;
            for ( int i = 1; i <=b; i++)
            {
               power = power * a;
            }
            cout<<"ans is: "<<power<<endl;
}

            ////////////////PRACTICE QUESTION/////////////////
{
            //Reverse
            int n=0;
            cout<<"enter the number: ";
            cin>>n;
            int rev=0;
            while(n!=0){
            int a = n % 10;
            rev = rev * 10 + a;
            n = n/10;
            }
            cout<<rev;
}

{
            //Seconds to Hour and minutes
            int h=0,m=0,s=0;
            int n;
            cout<<"Enter the time in sec: ";
            cin>>n;
            h = n/3600;
            n=n%3600;
            m=n/60;
            n=n%60;
            s=n;
            cout<<"Hours: "<<h<<" Minutes: "<<m<<" Seconds: "<<s ;
}

{
            //ASCII
            char ch;
            cout<<"enter the character: ";
            cin>>ch;
            int v=ch;
            cout<< v;
}
            
            return 0;
            }