#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
         string removeOuterParentheses(string s) {
        //create an empty string to store the result
        string result = ""; 

        //create a level var to trace the depth
        int level = 0;

        for(char c: s){
            if(c == '('){
                if(level > 0) result += c;

                level++;
            }
            else if(c == ')'){
                level--;

                if(level > 0) result += c;
            }
        }
        return result;
    }
};
int main(){
    solution sol;
    string s = "(()())(())";
    string res = sol.removeOuterParentheses(s);
    cout << res << endl;
    return 0;
}