#include <iostream>
# include <string>
using namespace std;
string compareStrings(string a,string b){
    string result;
    if(a==b){
        result=a+"and"+b+ "are equal";
    }
    else if(a>b){
        result=a+"and"+b+ "are not equal and " +a+ " is greater than " +b;
    }
     else if(b>a){
        result=a+"and"+b+ "are not equal and " +b+ " is greater than " +a;
    }
    return result;}
int main(){
string s1,s2;
cout<<"Enter first string: ";
cin>>s1;
cout<<"Enter second string: ";
cin>>s2;
cout<<compareStrings(s1,s2);
}
   