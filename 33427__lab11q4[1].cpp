#include <iostream>
# include <string>
using namespace std;
 string jobselect(int marks,int experience){
      string job;
    if(marks>=50 && experience==0){
       job= "trainee engeenieer";
        
    }
        else if(marks>=60 && experience>=1){
            job= "Assistant Developer";
        }
        else if (marks>=70 && experience>=2){
            job= "associate developer";
        }
        else job="not eligble";
        return job;
}
  int main (){
      int m,e;
      cout<<"Marks:"<<endl;
      cin>>m;
      cout<<"Experience:"<<endl;
      cin>>e;
      cout<<"selected as; "<<jobselect(m,e);
     
  }
  