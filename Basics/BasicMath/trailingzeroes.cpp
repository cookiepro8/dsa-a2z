class Solution {
public:
    int trailingZeroes(int n) {
        
        int count  = 0;
        while(n>0){
            n /= 5;
            count += n;
        }
        return count;

        //another approach:
        /*
        int res = 0;
        for(long long int i = 5; n/i > 0; i*5){
            n /= 5;
            res += n;
        }
        return res;
        */

        /*
        one line approach:
        Recursion
        return n == 0 ? 0 : n/5+trailingZeroes(n/5);
        */
    }
};