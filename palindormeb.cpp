#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string &s)
    {
        string filtered;
        for (char c : s)
        {
            if (isalnum(c))
            {
                filtered += tolower(c);
            }
        }

        int i = 0;
        int n = filtered.size() - 1;

        while (i < n)
        {
            if (filtered[i] != filtered[n]){
                return false;
            }
            i++;
            n--;
        }

        return true;
    }
};

int main()
{
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(s);
    return 0;
}