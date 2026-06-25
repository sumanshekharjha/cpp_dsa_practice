#include<iostream>
using namespace std;

#include<sstream>

int main(){

{
    string s = "shekhar is a cse student";
    stringstream ss(s);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}
cout<<endl;


{
   //most occuring word
    string str = "suman shekhar is a cse student. cse is  branch";
    stringstream ss(str);
    string temp;

    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }

    
    sort(v.begin(),v.end());
    int maxc=1;
    int count=1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxc=max(maxc,count);
    }
    count =1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxc){
            cout<<v[i]<<" "<<maxc<<endl;
        }
    }
}
cout<<endl;


{
    //STOI function   string to integer
    string s="1234";
    int x=stoi(s);
    cout<<x+1<<endl;
    
    int a=12342;
    string s1=to_string(a);
    cout<<s1<<endl;

    //STOLL function   string to long long
    string str = "12323535334";
    long long y=stoll(str);
    cout<<y;
}
cout<<endl;


{
    //max in string array

    string arr[]={"0123","0023","456","00182","940","002910"};
    int max=stoi(arr[0]);
    string maxs=arr[0];
    for(int i=1;i<=5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=arr[i];

        }
    }
    cout<<maxs; 
}
cout<<endl;


{
    vector<string> v;

    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}


}