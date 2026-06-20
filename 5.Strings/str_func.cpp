#include<iostream>
using namespace std;

int main(){
    
{
    string str = "shekhar suman";
    cout<<str.length();

}
cout<<endl;


{
      string str = "cseai";
      str.push_back('b');
      cout<<str<<endl;
      string str1 = "sumann";
      str1.pop_back();
      cout<<str1;

}
cout<<endl;


{
   string s = "abd";
   string s1 = "efg";
   string s2=s+s1;
    cout<<s2<<endl;
    s= s + "xyz";
    cout<<s;

}
cout<<endl;


{
string s="abcdefgh";
reverse(s.begin()+2,s.end()-1);
cout<<s<<endl;
//to reverse from particular index: s.begin()+idx
//if rverse from m to n : s.begin+m,s.begin +(n+1)
}
cout<<endl;


{
    string s = "abcdefgh";
    cout<<s.substr(1)<<endl;
    cout<<s.substr(1,4)<<endl;

}
cout<<endl;


{
   string str;
   cout<<"enter the string: ";
   cin>>str;
   int n=str.length();
   cout<<str.substr(0,n/2);

}
cout<<endl;


{
    int x= 12345;
    string s= to_string(x);
    cout<<s;
}
cout<<endl;


{
     int x= 197878345;
    string s= to_string(x);
    cout<<s.length();
}
}