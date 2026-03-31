#include<iostream>
using namespace std;

void printDivisors(int n){
    for(int i = 0; i<n; i++){
        if(n%i == 0){
            cout << i << endl;
        }
    }
}
int main(){
    
    return 0;
}

//TC: O(N)