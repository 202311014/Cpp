#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int , 5> a = { 1,2,3,4,5};
    int size = a.size();

    for (int i =0; i<size ; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Empty or not " << a.empty() << endl;
    
    cout << "Element at 1 is " << a.at(1) ;
}