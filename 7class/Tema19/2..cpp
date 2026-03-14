#include <iostream>
using namespace std;

int get_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = get_sum(arr, n);
    cout << result;
}#include <iostream>
using namespace std;

void get_sums(int arr[], int n, int& pos_sum, int& neg_sum) {
    pos_sum = 0;
    neg_sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos_sum += arr[i];
        } else if (arr[i] < 0) {
            neg_sum += arr[i];
        }
        // ноль пропускаем
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int pos_sum, neg_sum;
    get_sums(arr, n, pos_sum, neg_sum);
    
    cout << pos_sum << " " << neg_sum;
}