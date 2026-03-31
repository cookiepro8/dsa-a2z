#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    void rotatebyoneplace(vector<int>& nums){
        int temp = nums[0];

        for(int i = 1; i<nums.size(); i++){
            nums[i-1] = nums[i];
        }

        nums[nums.size()-1] = temp;
    }

};
int main(){
    solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};

    sol.rotatebyoneplace(nums);
    for(int num: nums){
        cout << num << " ";
    }
    return 0;
}