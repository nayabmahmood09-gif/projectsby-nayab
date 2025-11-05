#include <iostream>

using namespace std;
int square(int n){
    
    return n*n;
    
}
    int cube(int n){
        
        return n*n*n;
    }
    
    int main(){
    
    int a;
    cout<<"enter a number";
    cin>>a;
    int sum=square(a)+cube(a);
    cout<<"Square = "<<square(a)<<", Cube = "<<cube(a)<<", Sum = "<<sum;

    
    }