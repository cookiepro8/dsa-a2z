#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int slargest(int arr[])
    {
        int largest = INT_MIN;
        int slargest = INT_MIN;
        int n = arr.size();
        if (n < 2)
            return -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                slargest = largest;
                largest = arr[i];
            }
        }
        return slargest;
    }
};
int main()
{
    solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int ans = sol.slargest(arr);
    cout << ans;
    return 0;
}