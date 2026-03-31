#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection_v1(vector<int>&a, vector<int>& b, int n, int m){
    vector<int> ans;
    int vis(m, 0);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}

//optimal approach 
vector<int> intersection_v2(vector<int>&a, vector<int>& b, int n, int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    
    return 0;
}