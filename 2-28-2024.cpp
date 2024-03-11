#include <iostream>
#include <vector>
#include <climits> // Include for INT_MIN
using namespace std;

// Function to find the submatrix with maximum sum
vector<vector<int>> max_sum_submatrix(vector<vector<int>>& matrix, int size) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> dp(rows, vector<int>(cols, 0));

    // Calculate cumulative sum matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dp[i][j] = matrix[i][j];
            if (i > 0) dp[i][j] += dp[i - 1][j]; // Add sum from top
            if (j > 0) dp[i][j] += dp[i][j - 1]; // Add sum from left
            if (i > 0 && j > 0) dp[i][j] -= dp[i - 1][j - 1]; // Remove overlapping
        }
    }

    int max_sum = INT_MIN;
    vector<vector<int>> max_submatrix;

    // Iterate through possible submatrices
    for (int i = size - 1; i < rows; i++) {
        for (int j = size - 1; j < cols; j++) {
            int submatrix_sum = dp[i][j];
            if (i >= size) submatrix_sum -= dp[i - size][j]; // Subtract sum from top
            if (j >= size) submatrix_sum -= dp[i][j - size]; // Subtract sum from left
            if (i >= size && j >= size) submatrix_sum += dp[i - size][j - size]; // Add overlapping

            // Update maximum submatrix sum
            if (submatrix_sum > max_sum) {
                max_sum = submatrix_sum;
                max_submatrix.clear();
                for (int r = i - size + 1; r <= i; r++) {
                    vector<int> row;
                    for (int c = j - size + 1; c <= j; c++) {
                        row.push_back(matrix[r][c]); // Fix: Access matrix[r][c]
                    }
                    max_submatrix.push_back(row);
                }
            }
        }
    }

    return max_submatrix;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 8, 6, 7, 3},
        {4, 4, 4, 4, 4},
        {5, 5, 5, 5, 5}
    };
    int size = 3;
    vector<vector<int>> max_submatrix = max_sum_submatrix(matrix, size);

    cout << "Maximum sum " << size << " x " << size << " matrix is" << endl;
    for (const vector<int>& row : max_submatrix) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

