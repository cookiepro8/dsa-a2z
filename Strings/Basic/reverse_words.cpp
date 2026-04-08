class Solution {
public:
    string reverseWords(string s) {
        // vector<string> words;
        // string word = "";
        // for(int i = 0; i<s.size(); i++){
        //     if(s[i] != ' '){  //if no blank space, collect the characters 
        //         word += s[i];
        //     }
        //     else if(!word.empty()){ //if blank space, collect the word and store in the words array.
        //         words.push_back(word);
        //         word = "";
        //     }
        // }
        // //add last word if any left
        // if(!word.empty()){
        //     words.push_back(word);
        // }

        // reverse(words.begin(), words.end());
        // //make the words into a single string.
        // string result = "";
        // for(int i = 0; i<words.size(); i++){
        //     result += words[i];

        //     //add space after each words, if it not last
        //     if(i < words.size()-1){
        //         result += " ";
        //     }
        // }
        // return result;

        //optimal approach:
        //two pointers

        string result = "";

        int i = s.size()-1;

        while(i>=0){
            //get the break point of the word
            while(i>=0 && s[i] == ' '){
                i--;
            }

            if(i<0) break;
            int end = i;

            while(i>=0 && s[i] != ' '){ //moving towards the next word
                i--;
            }

            string word = s.substr(i+1, end-i); //word slicing

            if(!result.empty()){
                result += " ";
            }

            result += word;
        }
        return result;
    }
};      