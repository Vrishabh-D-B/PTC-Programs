#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int count = 0;
        void Path(int i, int j, int row, int col, string osf){//vector<vector<int>> mat){
            //cout << "i: " << i << " j: " << j << endl;
            if(i == row-1 and j == col-1){
                cout << osf <<"\n";
                count++;
                return;
            }
            if(i == row or j == col)
                return;

            osf.append("R");
            Path(i, j+1, row, col, osf);
            osf.pop_back();

            osf.append("D");
            Path(i+1, j, row, col, osf);
            osf.pop_back();

            return;
        }
};

int main(){
    Solution s1;
    string str = "";
    s1.Path(0, 0, 3, 3, str);
    
}

