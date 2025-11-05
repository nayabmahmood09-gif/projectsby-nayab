

#include <iostream>
using namespace std;
int updateMarks(int &m) {   
    m=m+10;   
   return m;
}

int main() {
    int marks;
    cout <<"Enter marks: ";
    cin >>marks;

    updateMarks(marks);         
    cout <<"Updated marks = "<< marks<< endl;

    return 0;
}