// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int>arr(N+1,1);
        for(int i = 2; i <= sqrt(N); i++)
            if(arr[i] == 1){
                int k = 2;
                while(k*i <= N){
                    arr[k * i] = 0;
                    k++;
                }
            }
        
        int count = 0;
        vector<int>res;
        for(int i = 2; i <= N; i++)
            if(arr[i] == 1)
                res.push_back(i);
        
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends