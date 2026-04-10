//positives
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    //brute force
        int longestsubarray(vector<int>& nums, int k){
            int n = nums.size();
            int maxi = 0;

            for(int i = 0; i<n; i++){
                for(int j = i; j<n; j++){
                    int currentsum = 0;

                    for(int k = i; k<j; k++){
                        currentsum += nums[i];
                    }
                    if(currentsum == k)
                    maxi = max(maxi, j-i+1);
                }
            }
            return maxi;
        }

        //optimal appraoch
        int longestsubarray2(vector<int>& nums, int k){
            
        }
};
