#include<iostream>
#include<vector>
using namespace std;

int main(){
    int daysNeeded(vector<int>& weights, int days){
        int days = 1;
        int currentLoad = 0;
        for(int w : weights){
            if(currentLoad + w > capacity){
                days++;
                currentLoad = w;
            }
            else{
                currentLoad += w;
            }
        }
        return days;
    }
    return 0;
}