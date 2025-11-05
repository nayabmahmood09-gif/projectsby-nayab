

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cout<<"how many numbers do you want to store?";
    cin>>n;
    cout<<"enter the number";
    vector<int> numbers;   
    int num=0;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>num;
        numbers.push_back(num);
        sum+=num;
    }
    cout<<"sum = "<<sum;
}