#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter your string(only Numbers):";
    cin>>s;
    
    char max1=s[0];
    char max2=s[0];

    for(int i=0;i<s.size();i++){
       if(s[i]>max1){
         max2=max1;
         max1=s[i];
       }
       else if(s[i]>max2 && s[i]!=max1) max2=s[i];
   }
   cout<<max2;
}