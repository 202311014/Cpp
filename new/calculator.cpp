#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b ;

    cout << "Enter the value of a :" << endl;
    cin >> a;

    cout << "Enter the value of b :" << endl;
    cin >> b;
    
    char opr;
    cout << "Enter the operation you want to perform :" << endl;
    cin >> opr;

    switch ( opr ){
        case '+' : cout << a + b << endl;
                   break; 

        case '-' : cout << a-b << endl;
                   break; 

        case '*' : cout << a*b << endl;
                   break;

        case '/' : cout << a/b << endl;
                   break;

        case '%' : cout << a%b << endl;
                   break;
    }
}