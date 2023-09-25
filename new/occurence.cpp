#include <bits/stdc++.h>
using namespace std;

int firstocc(vector<int>& arr,int n ,int k){
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;;
    int ans =-1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if ( k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;;
    }
    return ans;
}

int lastocc(vector<int>& arr,int n ,int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans2 =-1;

    while(s<=e){
        if(arr[mid] == k){
            ans2 = mid;
            s = mid + 1;
        }
        else if ( k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;;
    }
    return ans2;
}

int main(){
    vector<int> arr{1,2,3,3,3,3,3,3,5};
    int a =firstocc(arr , 9 , 3);
    int b = lastocc(arr , 9 , 3);

    int ans = b -a + 1 ;
    cout << ans ;
}