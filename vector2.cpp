#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v1;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v1.push_back(input);
    }

    for(int i = 0, j = v1.size()-1; i < j; i++, j-- ){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int a : v1){
        // if(a > max)
        //     max = a;
        // if(a < min)
        //     min = a;
        maximum = max(a,maximum);
        minimum = min(a,minimum); 
    }
    
    for(int a : v1){
        cout << a << ' ';
    }
    cout << endl;
    cout << "max = "<< maximum << endl;
    cout << "min = "<< minimum << endl;

}