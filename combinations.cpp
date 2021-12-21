#include<bits/stdc++.h>
using namespace std;
// set<vector<int>> res;
//     void combinations(vector<int> osf, int n, int k, int i){        
//         if(i == k){
//             res.insert(osf);
//             return;
//         }
//         for(int j = 1; j <= n; j++){
//             osf.push_back(j);
//             combinations(osf,n,k,i+1);
//             osf.pop_back();
//         }
//         return;
//     }
//     vector<vector<int>> combine(int n, int k) {
//         vector<vector<int>> result;
//         set<set<int>> resultset;
//         vector<int>osf;
//         combinations(osf,n,k,0);
        
//         for(auto x : res){
//             set<int>y(x.begin(),x.end());
//             resultset.insert(y);
//         }
//         for(auto x : resultset){
//             if(x.size() == k){
//                 vector<int>y;
//                 y.assign(x.begin(),x.end());
//                 result.push_back(y); 
//             }

//         }
//         return result;
//     }
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