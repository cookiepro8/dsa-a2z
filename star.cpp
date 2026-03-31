#include<iostream>
using namespace std;
void print(int n){
    for(int i = 0; i<n; i++){
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << endl;
        }
        cout << endl;
        
    }
}

void print2(int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                cout << j << endl;
            }
            cout << endl;
            
        }
        
    }

int main(){
    int n;
    cin >> n;
    print(n);
    print2(4);
    return 0;
}
