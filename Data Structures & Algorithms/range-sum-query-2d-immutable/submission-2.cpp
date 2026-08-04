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

        //prefix
        int carry = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            arr[i][0] += carry;
            for(int j = 1; j < arr[i].size() ; j++){
                arr[i][j] = arr[i][j-1] + arr[i][j];
            }
        }
    }
    

    int sumRegion(int row1, int col1, int row2, int col2) {
        int sumi = 0;
        for(int i = row1 ; i <= row2 ; i++){
            if(col1-1 >= 0){
            sumi += arr[i][col2] - arr[i][col1-1];
            }
            else{
                sumi += arr[i][col2];
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