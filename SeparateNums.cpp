#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

void separateNumbers(string s) {
    string first;
    bool flag;
    int temp;
    for(int i = 0; i < s.length()/2; i++){
        
        first = s.substr(0,i+1);
        int first_i = stoi(first);
        temp = first_i;
        //int itr = s.length()/first.length() - 1;
        for(int j = 0; first.length() < s.length(); j++)
            first.append(to_string(++first_i));
        
        if(s == first){
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout << "YES " << temp << "\n";
    else
        cout << "NO\n";
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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
