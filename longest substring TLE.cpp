// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string longestPalindrome(string s) {
        int n = s.length();
        map<string,int>mymap;
        for(int i = 0; i < n; i++){
            int left,right;
            left = right = i;
            while(left >= 0 && right < n){
                if(s[left] == s[right]){
                    int len = right - left + 1;
                    mymap[s.substr(left,len)] = len;
                }
                else
                    break;
                left--;
                right++;
            }
        }
        
        for(int i = 0; i < n-1; i++){
            int left = i;
            int right = i+1;
            while(left >= 0 && right < n){
                if(s[left] == s[right]){
                    int len = right - left + 1;
                    mymap[s.substr(left,len)] = len;
                }
                else
                    break;
                left--;
                right++;
            }
        }
        int max_count = 0;
        string res = "";
        for (auto ele : mymap) {
            if (max_count < ele.second) {
                res = ele.first;
                max_count = ele.second;
            }
        }
        return res;
    }
   
};

// { Driver Code Starts.
int main()
{
    
    string s = "babad";
    Solution ob;
    string s1 = ob.longestPalindrome(s);
    cout << s1 << "\n";
    
    
    
    cout<<endl;
    
    return 0;
}  // } Driver Code Ends