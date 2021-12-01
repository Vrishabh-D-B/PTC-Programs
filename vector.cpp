#include<bits/stdc++.h>
using namespace std;

void Print_Vector(vector<int> v)
{
    for(int number : v)
        cout << number << ' ';
    cout << endl;
    
}

vector<int> InputVector()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    return v;
}
int main()
{
    vector<int> v1;
    v1 = InputVector();
    
    cout << "Print_Vector(v1);" << endl;
    Print_Vector(v1);
    
    cout << "v1.size();" << endl;
    cout << "size = " << v1.size() <<endl;

    cout << "v1.erase(v1.begin());" << endl;
    v1.erase(v1.begin());
    Print_Vector(v1); 

    cout << "v1.erase(v1.begin(), v1.begin() + 2);" << endl;
    v1.erase(v1.begin(), v1.begin() + 2);
    Print_Vector(v1); 


    cout << "reverse(v1.begin(), v1.end());" << endl;
    reverse(v1.begin(),v1.end());
    Print_Vector(v1);

    cout << "v1.pop_back();" << endl;
    v1.pop_back();
    Print_Vector(v1);

    cout << "sort(v1.begin(), v1.end())" << endl;
    sort(v1.begin(), v1.end());
    Print_Vector(v1);
    
    cout << "v1.clear();" << endl;
    v1.clear();
    Print_Vector(v1);
}