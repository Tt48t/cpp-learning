#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            cout << "Element found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}
