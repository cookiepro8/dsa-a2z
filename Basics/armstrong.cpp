#include <iostream>
using namespace std;

class solution
{
public:
    bool armstrong(int x)
    {
        int sum = 0;
        int dup = x;
        while (x != 0)
        {
            int ld = x % 10;
            sum = sum + (ld * ld * ld);
            x = x / 10;
        }
        return sum == dup;
    }
};

int main()
{
    solution sol;
    bool res = sol.armstrong(371);
    cout << res;
    return 0;
}