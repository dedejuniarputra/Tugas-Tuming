#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A;
    cin>> A;
    for(int i=A; i>0; i--){
        if(A%i== 0){
            cout<<i<<endl;
        }
    }

    return 0;
}

