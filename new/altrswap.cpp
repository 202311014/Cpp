#include <bits/stdc++.h>
using namespace std;

void alterswap(int num[], int size){
    for(int i=0; i<size; i=i+2 ){
        if(i+1<size){
            swap(num[i],num[i+1]);
        }
    }
}

void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}



int main(){
    int size;
    cin >> size;
    int i;

    int num[100];
     for(i= 0; i<size; i++){
        cin >> num[i];
    }
    alterswap(num , size) ;
    printarr(num , size) ; 
}