class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int> >pascal(n);

        for(int i=0 ; i<n ; i++){
            pascal[i].resize(i+1);

            for(int j=0; j<i+1 ; j++){
                if(j==0 || j==i){
                    pascal[i][j]=1;

                }
                else{
                    pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
                }
            }

        }
        return pascal;
    }
};

Alternate solution
vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int> >pascal(n);

        for(int i=0 ; i<n ; i++){
            pascal[i].resize(i+1);

            for(int j=0; j<i+1 ; j++){
                if(j==0 || j==i){
                    pascal[i][j]=1;

                }
                else{
                    pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
                }
            }

        }
        return pascal;
    }
