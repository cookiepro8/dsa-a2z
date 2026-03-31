#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums){
    for(int i = 1; i<=n; i++){
        bool flag = 0;
        for(int j = 0; j<n-1; j++){
            if(nums[j] == i){
                bool flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        return i;
    }
    return -1;
}


int main(){
    
    return 0;
}