class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // col check
        for(int i =0 ; i < board.size() ; i++){
            unordered_set<int>st;
            for(int j =0 ; j < board[i].size() ; j++){

                if(board[j][i] == '.'){
                    continue;
                }

                if(st.count(board[j][i])){
                    return false;
                }

                st.insert(board[j][i]);
            }
        }

        // row check
        for(int i = 0; i < board.size() ; i++){
             unordered_set<int>st;
            for(int j =0 ; j < board[i].size() ; j++){
                if(board[i][j] == '.'){
                    continue;
                }

                if(st.count(board[i][j])){
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        //box check
        for(int i =0 ; i < board.size() ; i+=3){
            for(int j = 0; j < board[i].size() ; j+=3){

                unordered_set<int>st;
                for(int a = 0;a < 3 ; a++){
                    for(int b = 0; b < 3 ; b++){
                        if(i+a < board.size() && j+b < board[i].size()){

                            if(board[i+a][j+b] == '.'){
                                continue;
                            }

                            if(st.count(board[i+a][j+b])){
                                return false;
                            }

                            st.insert(board[i+a][b+j]);
                        }
                    }
                }
            }
        }

        return true;
    }
};
