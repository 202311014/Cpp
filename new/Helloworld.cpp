#include<iostream>
using namespace std;
int main(){
    cout<< "namaste duniya" <<endl;
    int a,b;
    cin >> a;
    cin >> b;
    if(a>b){
        cout<< "a is greater than b" <<endl;
    }
    else if(a=b){
        cout <<"a is equal to b" <<endl;   
    }
    else{
        cout<< "b is greater than a" <<endl;
    }
}