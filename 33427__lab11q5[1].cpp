#include <iostream>
using namespace std;
int main(){
srand(1);
int n;
cout<<"enter the size of array ";
cin>>n;
cout<<n <<" numbers -->";
int arr[n];
int freq=0;
int count=0;
for (int i=0;i<n;i++){
    arr[i]=rand()%11;
   cout<<arr[i]<<" " ;
   
}
cout<<endl;
for (int i=0;i<n;i++){
 for (int j=0;j<i;j++){
      if(arr[i]==arr[j]) {
      freq=1;
      break;
   }
   }
   if(freq==0){
   for (int k=0;k<n;k++){
       if(arr[i]==arr[k]){
           count++;
       }
   }
   

}
cout <<arr[i]<<" --> "<<count<<" times"<< endl;


}
}