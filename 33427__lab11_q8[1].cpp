#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
int sum=0;
cout<<"enter a number";
cin>>n;

if(n>1000){
    cout<<"invalid number enter again";}
    else if(n<=1000){
cout<<"output ";
for(int i=1;i<n+1;i++){
    cout<<pow(i,3)<<" ";
    sum+=pow(i,3);
}
cout<<endl;
cout<<sum;
}}