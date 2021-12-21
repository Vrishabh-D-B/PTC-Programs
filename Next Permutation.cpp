// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        
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
    ob.nextPermutation(nums);
    for(auto ele : nums) {
        cout<< ele <<" ";
    }
    cout<<endl;
    
    return 0;
}  // } Driver Code Ends