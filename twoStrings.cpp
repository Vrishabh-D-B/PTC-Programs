#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

string twoStrings(string s1, string s2) {
    
    vector<char>vs1;
    for(int i = 0; i < s1.length(); i++){
        vs1.push_back(s1[i]);
    }
    
    vector<char>vs2;
    for(int i = 0; i < s2.length(); i++){
        vs2.push_back(s2[i]);
    }
    
    map<char,int>myMap;
    for(int i = 0; i < vs1.size(); i++){
        if(myMap.find(vs1[i]) != myMap.end())
            myMap[vs1[i]] += 1;
        else 
            myMap[vs1[i]] = 1;         
    }
    
    string rslt = "";
    for(char element : vs2){
        if(myMap.find(element) != myMap.end())
            rslt += element;        
    }
    
    if(rslt.length() != 0)
        return "YES";
    else
        return "NO";
    
    
    //vector<char>rslt;

}

int main()
{
   
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    


    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
