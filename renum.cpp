#include <iostream>
using namespace std;

int reverse(int x) {
        int n;
        int revnum = 0;
        bool isnegative = (n<0);
        n = (isnegative) ? -n : n;

        while(n>0){
            int ld = n%10;
            revnum = (revnum*10)+ld;
            n = n/10;
        }

        return (isnegative) ? -revnum : revnum;
    }

int main()
{
    int r = reverse(-1234);
    cout << r;
    return 0;
}