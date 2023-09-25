#include <bits/stdc++.h>
using namespace std;

int sumofelements(int num[], int size){
    int sum=0;
    for(int i=0; i<size; i++ ){
        sum = sum + num[i];

    }
return sum;
}


int main(){
    int size;
    cin >> size;
    int i;

    int num[100];
     for(i= 0; i<size; i++){
        cin >> num[i];
     }
cout<<"Sum of elements is " << sumofelements(num, size);
}