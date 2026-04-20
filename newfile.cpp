#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// class solution{
//     public:

// };
int main(){
    string a = "hatti";
string b = a+a;
cout << b << "\n"; // hattihatti
b[5] = 'v';
cout << b << "\n"; // hattivatti
string c = b.substr(3,4);
cout << c << "\n"; // tiva
    return 0;
}