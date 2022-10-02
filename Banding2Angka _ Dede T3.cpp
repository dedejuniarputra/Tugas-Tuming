#include <iostream>
using namespace std;

//ini di buat oleh dede yang nambah pening ya kaa euhm semngat:(
int main(){
    int z, x;
    cin >> z >> x;
        
        if (z >= 1 && x <= 100){
            if (z == x){
                cout << z << " == " << x << endl;            
        }
            if (z != x){
            cout << z << " != " << x << endl;
        }
            if(z < x){
            cout << z << " < " << x << endl;    
        }
            if(z <= x){
            cout << z << " <= " << x <<endl;    
        }
            if (z > x){
                cout << z << " > " << x << endl;    
        }
            if (z >= x){
                cout << z << " >= " << x << endl;    
            }
}
        else {
            cout << "INPUTAN SALAH";
        }
    
    return 0;
}
