#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    string s1;
    int count = 0;
    for(int i = 0; i < s.length(); i+=3){
        s1 = s.substr(i,3);
        if(s1 != "SOS"){
            if(s1[0] != 'S')
                count++;
            if(s1[1] != 'O')
                count++;
            if(s1[2] != 'S')
                count++;
        }
            
    }
    return count;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
