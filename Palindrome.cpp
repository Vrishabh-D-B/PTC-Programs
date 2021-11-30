#include <iostream>
#define MAX 20
using namespace std;
bool palindrome(int arr[],int size,int i,int j)
{
    for ( i = 0, j = size; i < j; ++i,--j)
        if (arr[i] != arr[j-1])
            return false;
    
    return true;    
}
int main() {
    int arr[MAX];
    int i,j,size;
    bool flag = true;
    
    cout << "Enter size for the array : ";
    cin >> size;
    
    cout << "Enter " << size << " elements for the array : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    flag = palindrome(arr, size, i, j );

    if(flag == false)
        
        cout << "Array is NOT Palindrome";
    else
        cout << "Array is Palindrome";
    
    cout << endl;
    return 0;
}
