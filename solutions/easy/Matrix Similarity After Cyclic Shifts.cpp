// Title: Matrix Similarity After Cyclic Shifts
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size(), n=mat[0].size();
        k%=n;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int nj;
                if(i%2==0) nj=(j+k)%n;
                else nj=(j-k%n+n)%n;

                if(mat[i][j]!=mat[i][nj]) return 
false;
            }
        }

        return true;
    }
};
