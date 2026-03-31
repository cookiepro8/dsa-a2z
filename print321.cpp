// 3 2 1 print using backtracking

#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout << i << " ";
    print(i+1, n);  //if htis line is above it is 12345 else 54321.
}

int main(){
    // int n;
    // cin >> n;
    print(1, 5);
    return 0;
}