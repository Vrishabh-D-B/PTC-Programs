#include <iostream>
#define MAX 20
using namespace std;
int main() {
    int arr[MAX];
    int i,size;
    
    cout << "Enter size for the array for storing Decimal no : ";
    cin >> size;
    
    cout << "Enter " << size << " elements for the array : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int count = 0;
    int temp_arr[MAX];
    for ( i = 0; i < size; i++)
    {
        if(arr[i] == 0)
            count = 0;
        else if(arr[i] == 1)
            count++;
        temp_arr[i] = count;
    }
    
    
    
    
