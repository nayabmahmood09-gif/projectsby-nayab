#include <iostream>
using namespace std;
double volumeCalc(double a,double b){
  double volume= a*b;
   return volume;
}
double getData(double a,double b){
   a=a*a;
    b=(1.0/3)*b;
   double answer=volumeCalc(a,b);
    return answer;
}

int main(){
    double a,h;
    cout<<"a=";
    cin>>a;
    cout<<"h=";
    cin>>h;
    cout<<getData(a,h);
}
