#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100; 
    int a[maxSize], b[maxSize], c[maxSize * 2]; 
    int n, m; 
    cout << "Enter the size of array a: ";
    cin >> n;
    cout << "Enter the elements of array a in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Enter the size of array b: ";
    cin >> m;
    cout << "Enter the elements of array b in sorted order: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
    cout << "Merged array c in sorted order: ";
    for (int i = 0; i < n + m; i++) {
       cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}

