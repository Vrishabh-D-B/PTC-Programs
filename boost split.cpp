#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

using namespace std;

int main() {
    string str = "This\tis\na string";
    vector<string> words;
    boost::split(words, str, boost::is_any_of(" \t\n"));
    for(string word: words) 
        cout << word << endl;
    return 0;
}
