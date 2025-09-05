#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[5];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize largest and second largest
    int largest, second;
    
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Traverse array from 2nd index
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second largest number is: " << second << endl;
    return 0;
}
