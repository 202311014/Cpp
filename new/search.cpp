#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    for(int i =0; i<n; i++){
        int ans = 0;
        if(k == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{5,6,1,2,3,4};
    int a;
    a = search(arr , 6, 3);
    cout << a;
}