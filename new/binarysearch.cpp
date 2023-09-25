#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = size + (end - size)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int main(){
    int even[6] = {2, 4 ,6 ,8, 12, 14};
    int evenIndex = binarysearch(even , 6 , 12);
    cout << evenIndex ;

}