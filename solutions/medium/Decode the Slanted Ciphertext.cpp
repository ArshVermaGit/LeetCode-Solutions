// Title: Decode the Slanted Ciphertext
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/decode-the-slanted-ciphertext/

class Solution {
public:
    string decodeCiphertext(string encodedText, 
int rows) {
        int n = encodedText.size();
        if (rows == 1) return encodedText;
        int cols = n / rows;
        string res;
        for (int start = 0; start < cols; start
++) {
            int i = 0, j = start;
            while (i < rows && j < cols) {
                res += encodedText[i * cols + 
j];
                i++;
                j++;
            }
        }
        while (!res.empty() && res.back() == ' 
') res.pop_back();
        return res;
    }
};
