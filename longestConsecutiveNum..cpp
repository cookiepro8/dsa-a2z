#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// brute force appraoch
class Solution
{
private:
    bool linearsearch(vector<int> &a, int num)
    {
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] == num)
            {
                return true;
            }
        }
        return false;
    }

public:
    int longestConsecutiveNum(vector<int> &arr)
    {
        // edge case
        if (arr.size() == 0)
            return 0;
        int n = arr.size();

        int longest = -1;

        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            int cnt = 1;

            while (linearsearch(arr, x + 1) == true)
            {
                x += 1;
                cnt += 1;
            }

            longest = max(cnt, longest);
        }
        return longest;
    }

    int longestConsecutiveNum1(vector<int> &arr)
    {
        // better approach

        if (arr.size() == 0)
            return 0; // edge case
        int n = arr.size();

        int lastsmaller = INT_MIN;
        int longest = 1;
        int cnt = 0;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {

            if (arr[i] - 1 == lastsmaller)
            {
                cnt += 1;

                lastsmaller = arr[i];
            }

            else if (arr[i] - 1 != lastsmaller)
            {
                cnt = 1;

                lastsmaller = arr[i];
            }

            longest = max(cnt, longest);
        }
        return longest;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 5, 8, 11, 4, 7};
    int ans = sol.longestConsecutiveNum(arr);
    int ans = sol.longestConsecutiveNum1(arr);
    cout << ans;
    return 0;
}