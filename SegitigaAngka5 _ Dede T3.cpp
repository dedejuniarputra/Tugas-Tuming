#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//ini dibuat oleh dede siang hari salah terus dikarekan spasi:)

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j ++){
            cout << "  ";
        }
        for(int k = n; k >= i; k--){
            cout << k << " ";
        }
        cout<<endl;
    }
    return 0;
}
