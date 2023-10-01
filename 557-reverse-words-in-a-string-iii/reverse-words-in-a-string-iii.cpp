class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans = "";
        while (ss >> word){ // this will read the string word by word
            reverse(word.begin(), word.end());
            ans += word + " ";
        }
        ans.pop_back(); // this line is basically to remove the last space
        return ans;  
    }
};