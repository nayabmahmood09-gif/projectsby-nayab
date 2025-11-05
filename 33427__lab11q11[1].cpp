

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cout<<"how many numbers do you want to store? ";
    cin>>n;
    cout<<"enter the numbers: ";
    vector<int> numbers;   
    int num;
 for(int i=0;i<n;i++){
     cin>>num;
     numbers.push_back(num);
 }
 cout<<"reversed order: ";
  for(int i=n-1;i>=0;i--){
  cout<<numbers[i]<<" ";
  }
}
 