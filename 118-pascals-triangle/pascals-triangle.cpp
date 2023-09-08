class Solution {
public:
    // Calculate n choose r (nCr) using a loop
    int calculateCombination(int n, int r) {
        int result = 1;
        for (int i = 0; i < r; i++) {
            result = result * (n - i) / (i + 1);
        }
        return result;
    }

    // Generate Pascal's Triangle with 'numRows' rows
    vector<vector<int>> generate(int numRows) {
        // Initialize a 2D vector to represent Pascal's Triangle
        vector<vector<int>> pascalTriangle(numRows);

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                // Calculate and insert the binomial coefficient (nCr) into the current row
                pascalTriangle[i].push_back(calculateCombination(i, j));
            }
        }
        return pascalTriangle;
    }
};