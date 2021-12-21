#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Prefix2D(vector<vector<int>>& matrix) {
    
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>>prefix(m,vector<int>(n));
    
    prefix[0][0] = matrix[0][0];
    //first row
    for(int i = 1; i < n; i++)
        prefix[0][i] = prefix[0][i-1] + matrix[0][i];
    //first column
    for(int i = 1; i < m; i++)
        prefix[i][0] = prefix[i-1][0] + matrix[i][0];

    for(int i = 1; i < m; i++)
        for(int j = 1; j < n; j++)
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + matrix[i][j];
    
    return prefix;
}
int main(){
    vector<vector<int>>mat = {{3,0,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}};
    vector<vector<int>>prefix1;
    prefix1 = Prefix2D(mat);
   
    for(auto x : prefix1){
        for(auto y : x)
            cout << y <<" ";
        cout << "\n";
    }
}