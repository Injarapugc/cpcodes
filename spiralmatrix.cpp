#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void printMatrixLayers(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        int layerNumber = 1;
        
        while (top <= bottom && left <= right) {
            cout << "\nLayer " << layerNumber << ":\n";
            
            // Top row (left to right)
            cout << "Top: ";
            for (int i = left; i <= right; i++) {
                cout << matrix[top][i] << " ";
            }
            cout << endl;
            
            // Right column (top+1 to bottom)
            if (top < bottom) {
                cout << "Right: ";
                for (int i = top + 1; i <= bottom; i++) {
                    cout << matrix[i][right] << " ";
                }
                cout << endl;
            }
            
            // Bottom row (right-1 to left)
            if (top < bottom) {
                cout << "Bottom: ";
                for (int i = right - 1; i >= left; i--) {
                    cout << matrix[bottom][i] << " ";
                }
                cout << endl;
            }
            
            // Left column (bottom-1 to top+1)
            if (left < right) {
                cout << "Left: ";
                for (int i = bottom - 1; i > top; i--) {
                    cout << matrix[i][left] << " ";
                }
                cout << endl;
            }
            
            top++;
            bottom--;
            left++;
            right--;
            layerNumber++;
        }
    }
    
    // Helper function to print the complete matrix
    static void printMatrix(const vector<vector<int>>& matrix) {
        cout << "Complete Matrix:\n";
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    // Example 1: 4x4 matrix
    vector<vector<int>> matrix1 = {
        {1,  2,  3,  4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9,  8,  7}
    };
    
    Solution sol;
    cout << "Example 1: 4x4 Matrix\n";
    Solution::printMatrix(matrix1);
    sol.printMatrixLayers(matrix1);
    cout << "\n------------------------\n";
    
    // Example 2: 5x5 matrix
    vector<vector<int>> matrix2 = {
        {1,  2,  3,  4,  5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };
    
    cout << "\nExample 2: 5x5 Matrix\n";
    Solution::printMatrix(matrix2);
    sol.printMatrixLayers(matrix2);
    
    return 0;
}
for(int d=1;d<=min(n,m)/2;d++)
    {
        string ans;
        for(int i=d;i<=m-d;i++)ans+=a[d][i];
        for(int i=d;i<=n-d;i++)ans+=a[i][m-d+1];
        for(int i=m-d+1;i>=d+1;i--)ans+=a[n-d+1][i];
        for(int i=n-d+1;i>=d+1;i--)ans+=a[i][d];
        ans+=ans;
        for(int i=0;i<ans.size()/2;i++)sum+=(ans.substr(i,4)=="1543");
    }