class NumMatrix {
public:
vector<vector<int>>arr;

    NumMatrix(vector<vector<int>>& matrix) {
        for(int i = 0 ; i < matrix.size() ; i++){
            vector<int>temp;

            for(int j = 0; j < matrix[i].size() ; j++){
                temp.push_back(matrix[i][j]);
            }

            arr.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
              int sumi = 0;
        for(int i = row1 ; i <= row2 ; i++){
            for(int j = col1 ; j <= col2 ; j++){
                sumi += arr[i][j];
            }
        }
        return sumi;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */