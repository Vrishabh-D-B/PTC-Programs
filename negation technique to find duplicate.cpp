#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = { 1, 2, 3, 1, 3, 6, 6 };

    int dup_count = 0;
    cout << "Duplicate Elements : ";
    for(int i = 0; i < arr.size(); i++)
        if(arr[abs(arr[i])] > 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else{
            cout << abs(arr[i]) << " ";
            dup_count++;
        }

    cout << "\nNo. of Duplicates  : " << dup_count <<"\n";
    
}