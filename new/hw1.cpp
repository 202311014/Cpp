#include<iostream>
using namespace std;
int main(){
   char c;
   cin >> c;
   if (c>=97 & c<=122 ){
    cout << "This is lower case" <<endl;
   }
   else if(c>=65 & c<=90){
    cout << "This is upper case" <<endl;
   }
   else{
    cout << "This is numeric" <<endl;
   }
}