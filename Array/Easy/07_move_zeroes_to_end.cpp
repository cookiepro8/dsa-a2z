#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    //naive appraoch
        int movezeroes(vector<int>& nums){
            vector<int> temp(n,0);
            int index = 0;
            for(int i = 0 ; i<nums.size(); i++){
                if(nums[i] != 0){
                    temp[index] = nums[i];
                    index++;
                }
            }
            //copy back temp to original
            for (int i = 0; i < num.size(); i++)
            {
                nums[i] = temp[i];
            }
            
            return nums;
        }

        //optimal appraoch: two-pointer
        int movezeroesOptimal(vector<int>& nums){
            int i = 0;
            for(int j = 1; j<nums.size(); j++){
                if(nums[j] == 0){
                    j++;
                    nums[i] = nums[j];
                }
            }
        }
};
int main(){
    
    return 0;
}