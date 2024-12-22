//problem link: https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> valuesRow(10, 0);
        vector<int> valuesCol(10,0);
        for(int i=0;i<9;i++)
        {
            fill(valuesCol.begin(), valuesCol.end(), 0);
            fill(valuesRow.begin(), valuesRow.end(), 0);

            for(int j=0;j<9;j++)
            {
            if(board[j][i] !='.'){
                if(valuesCol[ board[j][i]-'0' ] == 1) return false;
                else valuesCol [ board[j][i]-'0' ] = 1;
            }
            if(board[i][j] !='.'){
                if(valuesRow [board[i][j]-'0' ] == 1) return false;
                else valuesRow [ board[i][j]-'0' ] = 1;
            }

            }
        }
        int valuesBox[10];
        
        for(int z=0;z<9;z+=3){
        for(int k=0; k<9;k+=3){
            memset(valuesBox, 0, sizeof(valuesBox));
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++)
                {
                    if(board[i+z][j+k]=='.') continue;
                    if(valuesBox [ board[i+z][j+k]-'0' ] == 1) return false;
                    else valuesBox [ board[i+z][j+k]-'0' ] = 1;
                }
            }
        }
        }
        return true;
    }
};
