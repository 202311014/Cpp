#include<iostream>
#include<math.h>
using namespace std;

int ApSeries (int n){

    int ans;
    ans = 3 * n + 7;
    return ans;
}


int main(){

    int n, a;

    cout << "Input n :" ;
    cin >> n ;

    a = ApSeries(n);
    cout <<"The Nth term"<<" "<<  a << endl;

}