class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.empty()) return "";

        //sort the strings lexicographically
        sort(str.begin(), str.end());
        string ans = "";
        string first = str[0];
        string last = str[str.size()-1];

        int minlength = min(first.size(), last.size());

        for(int i = 0; i<minlength; i++){
            if(first[i] != last[i]) break;

            ans += first[i];
        }
        return ans;
    }
};