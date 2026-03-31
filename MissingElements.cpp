//optimal approach:
//XOR all elements, the missing element will automatically print itself

#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& arr){
    int n = arr.size()+1;
    int xor_1 = 0, xor_2 = 0;


    for (int i = 0; i < n-1; i++)
    {
        xor_1 ^= arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        xor_2 ^= arr[i];
    }

    return xor_1^xor_2;
    
}
int main(){
     vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
     int res = missingNumber(arr);
     cout << res;
    return 0;
}