#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<climits>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //验证9行
        for(int i = 0; i < board.size(); i++) {
            if (!isValid(board[i])) return false;
        }
        // 验证9列
        for (int i = 0; i < 9; i++) {
            vector<char> t;
            for (int j = 0; j < 9; j++) t.push_back(board[j][i]);
            if (!isValid(t)) return false;
        }
        //验证9个3x3宫格
        int row = 0, col = 0;
        for (int k = 0; k < 9; k++) {
            vector<char> t;
            for (int p = 0; p < 3; p++) {
                t.push_back(board[row+p][col]);
                t.push_back(board[row+p][col+1]);
                t.push_back(board[row+p][col+2]);
            }
            if (!isValid(t)) return false;
            if (col < 6) {
                col += 3;
            } else {
                row += 3;
                col = 0;
            }
        }
        return true;
    }

private:
    bool isValid(vector<char>& s) {
        int a[9] = {0};
        for(int i = 0; i < 9; i++) {
            if (s[i] != '.') {
                int index = s[i]-'1';
                if (a[index] > 0) return false;
                else a[index] = 1;
            }
        }
        return true;
    }
};
