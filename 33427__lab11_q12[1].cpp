#include <iostream>
using namespace std;
void SwapValues(int &a,int &b){
    int temp=a;
    a=b;
    b=temp ;
    
    cout<<a<<" "<<b;
}
int main(){
    int a,b;
    cout<<"enter a= ";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    cout<<"before swap"<<a<<" "<<b<<endl;
    cout<<"after swap"<<" ";
    SwapValues(a,b);
}