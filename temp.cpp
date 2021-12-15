#include<bits/stdc++.h>
using namespace std;

void productExceptSelf(vector<int> nums) {
        int n = nums.size();
        vector<int>lr(n,0);
        vector<int>rl(n,0);
        vector<int>res(n,0);
        
        lr[0] = nums[0];
        rl[n - 1] = nums[n - 1];
        
        for(int i = 1; i < n; i++){
            lr[i] = lr[i-1] * nums[i];
            rl[n-1-i] = rl[n-i] * nums[n-1-i];
        }
        
        res[0] = rl[1];
        res[n-1] = lr[n-2];
        for(int i = 1; i < n-1; i++){
            res[i] = lr[i-1] * rl[i+1];
        }
        
        for(int x : res)
            cout << x << "  ";
    }

    int main(){
        vector<int> nums{ 1, 2, 3, 4};
        productExceptSelf(nums);
        return 0;
    }