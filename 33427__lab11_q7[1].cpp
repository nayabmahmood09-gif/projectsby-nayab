#include <iostream>
using namespace std;
char displaychar(int a,char b){
    for(int i=0;i<a;i++){
        cout<<b;
    }
   int ans;
    cin>>ans;
    return ans;
}
   int main(){
       int num;
       char character;
       cout<<"enter number";
       cin>>num;
         cout<<"enter character";
         cin>>character;
       cout<<displaychar(num,character);
   }
   