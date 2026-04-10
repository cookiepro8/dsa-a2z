// without using extra space
/*
nums1 = [1,2, 3, 0, 0, 0]
nums2 = [2, 5, 6]
result = [1, 2, 2, 3, 5, 6]

Algorithm:
get the sizes
fix pointers
compare wiht nums1 ele, and make the best fit

insert all the elements in nums1 and sort , and move zeroes to end
correction:
dont nee to move zeroes, as the zeroes are just place holders

 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    void mergingsortedarrays(vector<int> &nums1, int m, vector<int>& nums2, int n)
    {
        for(int i = 0; i<n; i++){
            nums1[m+i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end()); 
        //tc:O((m+n) log(m+n)), sc: O(1)
    }

    //optimal using 3-pointers
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }

            // remaining elements
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
int main()
{

    return 0;
}