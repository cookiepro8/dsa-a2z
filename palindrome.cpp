#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) { return false;}
        int rev = 0;
        int n = x;
        while(n!=0){
            rev = (rev*10)+x%10;
            n = n/10;
        }
        return rev == x;
    }
};

int main(){
    int x;
    cin >> x;
    Solution sol;
    int res = sol.isPalindrome(121);
    cout << res;

    return 0;
}