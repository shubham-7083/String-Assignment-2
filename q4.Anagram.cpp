#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s,p;
    cout<<"Enter two words:";
    cin>>s>>p;
    
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());

    if(s==p) cout<<"Anagram";
    else cout<<"Not Anagram";
    
  
}