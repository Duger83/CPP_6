#include <iostream>
using namespace std;

int min_positive(int arr[], int n) {
    int min_pos = 100000;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < min_pos) {
            min_pos = arr[i];
        }
    }
    return min_pos;
}

int max_negative(int arr[], int n) {
    int max_neg = -100000;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] > max_neg) {
            max_neg = arr[i];
        }
    }
    return max_neg;
}

int main() {
    int n;
    cin >> n;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min_pos = min_positive(arr, n);
    int max_neg = max_negative(arr, n);
    
    cout << min_pos << " " << max_neg;
}