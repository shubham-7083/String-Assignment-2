#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter your word:";
    cin>>s;
    string temp=s;
    reverse(temp.begin(),temp.end());
    s+=temp;
    cout<<s;
    
}