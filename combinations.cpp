#include<bits/stdc++.h>
using namespace std;

    void solve( int idx,int k , int n , vector<bool>&used, vector<vector<int> >&res ,vector<int> &osf ){
        if(osf.size()==k){
            res.push_back(osf);
            return ;
        }
        for(int i=idx;i<=n;i++){
            if(!used[i]){
                used[i]=1;
                osf.push_back(i); 
                solve(i+1,k,n,used,res,osf);
                used[i]=0;
                osf.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
            vector<bool> used(n+1,0);
            vector<vector<int> > res;
            vector<int>osf;
            solve(1,k,n, used,res,osf);
            return res;
        }
    
    int main(){
        vector<vector<int>> resu = combine(4,2);
        for(auto x : resu){
            for(auto y : x)
                cout << y << " ";
            cout << "\n";
        }
        return 0;
    }