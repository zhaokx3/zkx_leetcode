#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
#include<unordered_map> 
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0) return ans;
        int n = matrix[0].size();
        int layers = min((m+1)/2, (n+1)/2);
        for (int k = 0; k < layers; k++) {

            int row_start = k, col_start = k;
            int row_end = m-1-k, col_end = n-1-k;
            int i = row_start, j = col_start;

            if (row_start >= row_end) { // 只剩一行了
                while (j <= col_end) ans.push_back(matrix[i][j++]);
                break;
            }
            if (col_start >= col_end) { // 只剩一列了
                while(i <= row_end) ans.push_back(matrix[i++][j]);
                break;
            }
            while (j < col_end) ans.push_back(matrix[row_start][j++]);
            while (i < row_end) ans.push_back(matrix[i++][col_end]);
            while (j > col_start) ans.push_back(matrix[row_end][j--]);
            while (i > row_start) ans.push_back(matrix[i--][col_start]);
        }
        return ans;
    }
};
