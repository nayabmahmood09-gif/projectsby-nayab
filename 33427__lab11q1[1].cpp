#include <iostream>
#include <string>
using namespace std;
int main(){
    string fname,sname;
    cout<<"enter first name"<<endl;
    cin>>fname;
    cout<<"enter second name"<<endl;
    cin>>sname;
 cout<<"reversed order"<<endl;
 
 for(int i= fname.length()-1; i>=0;i--){
     cout<<fname[i];
 }
 cout<<" ";

  for(int i= sname.length()-1; i>=0;i--){
     cout<<sname[i];
 }   
    
    
    
    
}