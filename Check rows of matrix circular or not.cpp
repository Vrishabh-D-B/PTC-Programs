#include<bits/stdc++.h>
using namespace std;


void checkCircular(vector<vector<int>>& matrix) {
    
}
int main(){
    vector<vector<int>>mat = {{1,2,3},{4,5,6},{7,8,9}};
    checkCircular(mat);
    for(auto x : mat)
        for(auto y : x)
            cout << y <<" ";
}