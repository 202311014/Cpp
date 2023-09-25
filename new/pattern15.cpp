#include<iostream>
using namespace std;
int main(){
        int n;
        cin >> n;
        char c = 65;

        int i=1;
        while(i<=n){
            int j=1;
            while(j<=i){
                cout << c <<" ";
                c=c+1;
                j+=1;
            }
            cout << endl;
            i+=1;

        }
}