#include <iostream>
#include <cmath>
using namespace std;
int power(double a,int b){
    double ans;
    for (int i=0;i<b;i++){
        ans=a*a;
    }
    return ans;
    
}
int main(){
    double a;
    int b;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    cout<<power(a,b);
}