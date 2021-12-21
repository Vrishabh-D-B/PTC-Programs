// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int factorial(int n){
        return (n==1 || n==0) ? 1: n * factorial(n - 1);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>returning;
        vector<int>res;
        int n = nums.size();
        for(int i = 0; i < factorial(n); i++){
        
            if(n > 1){
                int i = n-1;
                while(i > 0 && nums[i-1] >= nums[i]){
                    i--;
                }

                if(i == 0){
                    reverse(nums.begin(), nums.end());
                }
                else{
                    int key = i-1;
                    while(i < n && nums[i] > nums[key]){
                        i++;
                    }
                    int temp = nums[key];
                    nums[key] = nums[i-1];
                    nums[i-1] = temp;
                    reverse(nums.begin() + key + 1, nums.end());
                }
            }
            
            returning.push_back(nums);
        }
        return returning;
    }
   
};

// { Driver Code Starts.
int main()
{
    
    int N;
    cin>>N;
    Solution ob;
    vector<int>nums;
    for(int i = 0; i < N; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    vector<vector<int>>returned = ob.permute(nums);
    cout << "\n";
    for(auto subvec : returned) {
        for(auto ele : subvec)
            cout<< ele <<" ";
        cout << "\n";
    }
    cout<<endl;
    
    return 0;
}  // } Driver Code Ends