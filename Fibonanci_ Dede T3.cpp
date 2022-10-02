#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, A1= 0, A2= 1, B= 0;
    cin >> n;

    for (int i= 1; i<=n; i++)
    {
    if(i== 1)
        {
            cout <<"" << A1<<" ";
            continue;
        }
    if(i== 2)
        {
            cout<<A2 <<" ";
            continue;
        }
        B= A1 + A2;
        A1= A2;
        A2= B;
        cout <<B<<" ";
    }
    return 0;
}
