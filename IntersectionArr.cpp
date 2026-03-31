//find array intersection

#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int>& a, vector<int>& b, int m, int n){
    vector<int> ans;
    int vis[m] = {0};

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            // compare current elements and ensure b[j] not already used
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]){
                break;
            }
        }
    }

    return ans;
}

int main(){
    // sample test
    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5};
    vector<int> inter = findArrayIntersection(a, b, a.size(), b.size());
    for(int x: inter) cout<<x<<" ";
    cout<<"\n";
    return 0;
}