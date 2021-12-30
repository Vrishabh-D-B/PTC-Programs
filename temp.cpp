// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
	public:
		int characterReplacement(string s, int k){
		
            map<char, int> freq;
            int front = 0;
            int back = 0;
            freq[s[0]] = 1;
            int res = INT_MIN;
            for(; back < s.size();) {
                int highestFreq = INT_MIN;
                for(auto x: freq) {
                    highestFreq = max(highestFreq, x.second);
                    // if(x.second > highestFreq) 
                        // highestFreq = x.second;
                }
                int toChange = back - front + 1 - highestFreq;
                if(toChange <= k){ 
                    if(res < back - front + 1) 
                        res = back - front + 1;
                    back++;
                    freq[s[back]]++;
                } else {
                    freq[s[front]]--;
                    front++;
                }
            }
            return res;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends