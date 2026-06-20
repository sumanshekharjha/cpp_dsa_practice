#include<iostream>
using namespace std;

int main(){

{
    string str="abbcdeffghh";
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout<<"count: "<<count<<endl; 
}
cout<<endl;

{
    //neighbour character is different
    string s; cin>>s;
        int count = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
        if (n==1) {
        break;
        }
        if(n==2 && s[0]!=s[1]){
            count=1;
            break;
        }
        if (i==0) {
               if(s[i]!=s [i+1]) count++;
        }
        else if (i==n-1) {
               if(s [i]!=s [i-1]) count++;
        } 
        else if (s[i]!=s[i+1] && s[i]!=s[i-1])
               count++;
        }
cout<<count;
}
cout<<endl;


{
 //SORTING using inbuilt function
    // string s1;
    // cout<<"Enter a string: ";
    // getline(cin,s1);
    // sort(s1.begin(),s1.end());
    // cout<<s1;

}
cout<<endl;


{
   //check anagram leetcode 242
   string s1="physicswallah";
   string s2="hacslilsyaphw";
   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   if(s1==s2) cout<<true;
   else cout<<false;

}
cout<<endl;


{
    //print the character that is occuring most time
     string s="physicswalllah";
     int max=0;
     for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max=count;
     }
     cout<<max;

       for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max==count)cout<<s[i];
}
}
cout<<endl;


{
  //efficient method
  string s="physicswalllaaah";
   vector<int>arr(26,0);

   for(int i=0;i<s.length();i++){
    char ch=s[i];
    int ascii=(int)ch;
    arr[ascii- 97]++;
   }
   int max=0;
   for(int i=0;i<26;i++){
    if(max<arr[i]) max=arr[i];
   }
   for(int i=0;i<26;i++){
    if(arr[i]==max){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<max<<endl;
    }
   }

}
cout<<endl;

}