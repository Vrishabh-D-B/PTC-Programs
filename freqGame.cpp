// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
   map<int, int> m1;
   for(int i=0; i<n; i++)
        m1[arr[i]]++;
    
    int maxi = INT_MIN;
    int mini = INT_MAX;
    
    for(auto element : m1){
        if(maxi < element.first && mini >= element.second){
            maxi = element.first;
            mini = element.second;
        }    
    
    }
    return maxi;
   
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}  // } Driver Code Ends