class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<char,int>> board_map;
        int i = 0, posi, id = -1 ;
        // Columns and rows verification
        for(auto row : board){
            posi = 1;
            if(!i%3) id++;
            for(auto cell : row){
                if(cell != '.'){
                    board_map[i][cell]++;
                    if(posi<=3)
                        board_map[id+18][cell]++;
                    else if(3<posi && posi <=6)
                        board_map[id+19][cell]++;
                    else if(posi>6)
                        board_map[id+20][cell]++;
                    }
                    posi++;
            }
             i++;
            for(auto map : board_map)
                if(map > 1) return false;
            board_map.clear();
        }
        
    }
};