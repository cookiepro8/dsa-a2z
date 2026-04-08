#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class solution{
//     public:

// };
// Brute force:
int missingnumber(vector<int> &arr)
{
    int n = arr.size() + 1;
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
            return i;
        return -1;
    }
}

// better approach:
// Hashing

// better appraoch 2:
// expSum - sum (sum of natural n numbers formula)

// optiaml approach:
// XOR operation

int missingnumber2(vector<int>& arr){
    int n = arr.size()+1;
    int xor1 = 0, xor2 = 0;

    for(int i = 0; i<n-1; i++){
        xor1 ^= arr[i];
    }

    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}

int main()
{

    return 0;
}