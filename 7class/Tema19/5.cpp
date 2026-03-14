#include <iostream>
using namespace std;

int findPositionOfMinimum(int arr[], int n) {
    int min_pos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_pos]) {
            min_pos = i;
        }
    }
    return min_pos;
}

int main() {
    int n;
    cin >> n;
    
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int b[1000];
    
    // Сортируем выборкой
    for (int i = 0; i < n; i++) {
        int pos = findPositionOfMinimum(a, n);
        b[i] = a[pos];
        a[pos] = 10001;
    }
    
    // Выводим результат
    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}