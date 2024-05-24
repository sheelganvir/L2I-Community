class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size()-1;
        int top=0;
        int bottom = matrix.size()-1;

        vector<int>temp;

        int direction = 0;

        while (left<=right && top<=bottom)
        {
            // left-->right 
            if(direction==0){
                for(int col=left ; col<=right ; col++){
                    temp.push_back(matrix[top][col]);
                }
                top++;
            }

            else if(direction==1){
                for(int row=top ; row<=bottom ; row++){
                    temp.push_back(matrix[row][right]);
                }
                right--;
            }

            else if(direction==2){
                for(int col=right ; col>=left ; col--){
                    temp.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            else {
                for(int row=bottom ; row>=top ; row--){
                    temp.push_back(matrix[row][left]);
                }
                left++;
            }
            direction=(direction+1)%4;
        }
        return temp;
    }
};