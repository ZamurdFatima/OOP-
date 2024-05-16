#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int arr[size];
    cout << "Enter 10 numbers for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    int count = 0;
    bool found = false;
    cout << "Number " << num<< " exists at indexes: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            cout << i << " ";
            count++;
            found = true;
        }
    }
    if (found) {
        cout <<endl;
        cout << "Number " << num << " exists " << count << " times in the array." <<endl;
    } else {
        cout << "Number does not exist in array." << endl;
    }
    return 0;
}

