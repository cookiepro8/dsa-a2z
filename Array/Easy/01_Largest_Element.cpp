#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class solution{
    public:
        //brute force
        int brute(vector<int>& arr){
            sort(arr.begin(), arr.end());

            return arr[arr.size()-1];
        }

        int optimal(vector<int>& arr, int n){
            int max = arr[0];
            for(int i = 1; i<n; i++){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            return max;
        }
};

int main(){
    solution sol;
    vector<int> arr = {1, 2, 3, 4, 8};
    int n = arr.size();
    int ans = sol.optimal(arr, n);
    cout << ans;
    return 0;
}