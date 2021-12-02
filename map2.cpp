//Program to find Union between two vectors
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int>m1;
    vector<int> v1;
    vector<int> v2;
    vector<int> rslt;
    int size1,size2;
    cin >> size1;
    for(int i = 0; i < size1; i++){
        int element;
        cin >> element;
        v1.push_back(element);
    }
    cin >> size2;
    for(int i = 0; i < size2; i++){
        int element;
        cin >> element;
        v2.push_back(element);
    }

    for(int i = 0; i < size1; i++){
        if(m1.find(v1[i]) != m1.end()){
            m1[v1[i]] += 1;
        }
        else
            m1[v1[i]] = 1;
    }

    for(int i = 0; i < size2; i++){
        if(m1.find(v2[i]) != m1.end()){
            rslt.push_back(v2[i]);
            cout << rslt[i] << " ";
        }
        cout << "\n";
            
    }

}