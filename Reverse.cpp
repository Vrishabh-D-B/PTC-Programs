#include <iostream>
#define MAX 20
using namespace std;
int main() {
    int arr[MAX];
    int i,j,size;
    
    cout << "Enter size for the array : ";
    cin >> size;
    
    cout << "Enter " << size << " elements for the array : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    for ( i = 0, j = size; i < j; ++i,--j) {
        int temp = arr[i];
        arr[i] = arr[j - 1];
        arr[j - 1] = temp;
    }

    cout << "Reversed array : ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
