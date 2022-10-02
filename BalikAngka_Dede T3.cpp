#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


 int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long i, d, k= 0;
    cin>> i;
    
    while(i>0){
        d= i%10;
        i= i/10;
        k= (k*10)+d;
    } 
    cout<<""<<k<<endl;
    return 0;
}
