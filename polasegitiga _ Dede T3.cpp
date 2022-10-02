#include <iostream>
using namespace std;

//dibuatnya salah terus karna kebalik balik hadeh:(

// " anda cape boleh, nyerah jangan"
// siapa suruh kuliah di unila 
int main(){
    int n;
    cin>>n;
    
    for(int i= 0; i< n; i++){
        for(int j= n; j> i; j--){
            cout<< " ";
        }
        for(int k = 1; k <= (2*i - 1); k++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}
