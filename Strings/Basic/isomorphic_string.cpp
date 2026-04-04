#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
        //ex: add -> egg -> same elements mapping
        bool isIsomorphic(string s, string t){
            int m1[128] = {0}, m2[128] = {0};
            // to store indices

            int n = s.size(); //get size of string

            for(int  i= 0; i<n; i++){
                if(m1[s[i]] != m2[t[i]]) return false; //if positins differ

                m1[s[i]] = i+1; //update their indices
                m2[t[i]] = i+1;

            }
            return true; //no mismatch
        }
};
int main(){
    solution sol;
    string s = "egg";
    string t = "add";

    if(sol.isIsomorphic(s, t)){
        cout << "yes" << endl;
    } else{
        cout << "no" << endl;
    }
    
    return 0;
}