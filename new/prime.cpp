#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a ;
    int i=2;
    while (i<a)
    {
        if(a%i==0){    
        cout << "Number is not prime."<< endl;
            return 0;
        }
        i=i+1;
    }
    cout << "Prime " << endl; 
    return 0;
}