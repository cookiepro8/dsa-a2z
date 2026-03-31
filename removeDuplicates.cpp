#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    int remove_duplicates(vector<int> &nums)
    {
        // we are changing the values of the forst elements are ignoring the rest, no swap happening, so need not create
        // outer loop
        int i = 0; // slow pointer

        for (int j = i + 1; j < nums.size(); j++) // Fast pointer
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1; // means upto this index there are unique elements, remaining are garbage values.
    }
};
 int main()
{
    vector<int> nums = {1, 1, 2, 3, 5, 5, 7, 7, 8, 9};
    solution sol;
    int k = sol.remove_duplicates(nums);
    cout << "After removing duplicates: " << endl;
    for (int x = 0; x < k; x++)
    {
        cout << nums[x] << " ";
    }
    cout << "\n";
    return 0;
}