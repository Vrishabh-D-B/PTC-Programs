#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v1.push_back(input);
    }
    
    map<int, int> m1;
    for(int i = 0; i < n; i++){
        if(m1.find(v1[i]) != m1.end()){
            m1[v1[i]] += 1;
        }
        else{
            m1[v1[i]] = 1;
        }
    }

    for(auto element : m1){
        cout << element.first << ' ' << element.second << endl;
    }

}