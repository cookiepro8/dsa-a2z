#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int floorsqrt(int n){
            int low = 0, high = n;

            while(low<=high){
                long long mid = (low+high)/2;
                long long val = (mid*mid);

                if(val<=n){
                    low = mid+1;
                } else{
                    high = mid-1;
                }
            }
            return high;
        }
};

int main(){
    
    return 0;
}