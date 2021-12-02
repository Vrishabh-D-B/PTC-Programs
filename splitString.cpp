#include<bits/stdc++.h>
using namespace std;
string split(int i, int j, string str){
    string str1 = "";
    for( i ; i < j; i++)
        str1 += str[i];
    return str1;
}
int main(){
    int i = 0, j = 0;
    vector<string>res;
    string str ;//= "Hello guys";
    getline(cin,str);
    while( j < str.length() ){
        if(str[j] == ' '){
            string str2 = split( i, j, str);
            res.push_back(str2);
            i = j;
            i++;
            j++;
        }
        j++;
    }
    res.push_back(split(i,j,str));
    for(auto element : res)
        cout << element << "\n";    
}