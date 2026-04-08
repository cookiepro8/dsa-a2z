#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    int maxconsecutiveones(vector<int> &nums)
    {
        int cnt = 0;

        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};
int main()
{
    // Input array
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    // Create Solution object
    solution obj;

    // Get answer
    int ans = obj.findMaxConsecutiveOnes(nums);

    // Print result
    cout << "The maximum consecutive 1's are " << ans;

    return 0;
}