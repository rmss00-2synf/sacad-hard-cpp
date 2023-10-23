class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> board_map;
        // Columns and rows verification 
        for(auto row : board){
            for(auto cell : row){
                if(cell != '.')
                    board_map[cell]++;
            }
            for(auto map : board_map)
                if(map > 1) return false;
            board_map.clear();
        }
        
    }
};