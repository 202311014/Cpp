#include<iostream>
using namespace std;
int main(){
    int a;
    int i =1;
    int sum = 0;
    cin>> a;
    while(i<=a){
        if(i%2==0){
            sum = sum+i;
        }
        i++;
    }
    cout << "Sum is: "<< sum<<endl; 
}