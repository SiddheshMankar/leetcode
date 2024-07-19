class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
  int n=matrix.size();
  int m=matrix[0].size();
    vector<int> minrow(n);
    vector<int> result;
    vector<int> colmax(m) ;
    for(int i=0;i<n;i++){
        int minelem=INT_MAX;
        for(int j=0;j<m;j++){
            minelem=min(minelem,matrix[i][j]);
        }
        minrow[i]=minelem;
    } 
     for(int i=0;i<m;i++){
        int maxelem=INT_MIN;
        for(int j=0;j<n;j++){
            maxelem=max(maxelem,matrix[j][i]);
        }
        colmax[i]=maxelem;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==minrow[i] && matrix[i][j]==colmax[j]){
                result.push_back(matrix[i][j]);
            }
        }
    } 
    return result;

    }
};