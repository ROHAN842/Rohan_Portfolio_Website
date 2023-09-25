class Solution {
public:
    int XOR(string& s){
        int f=0;
        for (char c: s)
            f^=c;
        return f;
    }
    char findTheDifference(string s, string t) {
        int sN=XOR(s), tN=XOR(t);
        return (char)sN^tN;
    }
};