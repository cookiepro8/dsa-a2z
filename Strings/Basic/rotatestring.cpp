class Solution {
public:
    bool rotateString(string s, string goal) {
        //brute force
        if(s.size() != goal.size()) return false;

        for(int i = 0; i< s.size(); i++){
            string rotated = s.substr(i)+s.substr(0, i);
            if(rotated == goal) return true;
        }
        return false;
    }

    //opitmal:

    bool rotateString2(string s, string goal) {
        if (s.length() != goal.length()) return false;
        
        
        //concatanate with itself and see if goal exists
        string doubledS = s+s;
        return doubledS.find(goal) != string::npos;
    }
};