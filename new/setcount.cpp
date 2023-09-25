#include <bits/stdc++.h>
using namespace std; 

int main(){
    int a,b;
    cout << "Input a:";
    cin >> a ;

    cout << endl << "Input b:";
    cin >> b;
    
    int count =0;

    // int t = a >> 1;
    // cout << t;
    while(a != 0 || b != 0){

        if (a & 1 == 1){
            count++;
        }
        
        if (b & 1 == 1){
            count++;
        }

        a = a >> 1;
        b = b >> 1;

    }
    cout << count ;

}