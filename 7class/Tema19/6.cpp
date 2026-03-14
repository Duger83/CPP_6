#include <iostream>
using namespace std;

int findPositionOfMinimum(int arr[], int n, int left) {
    int min_pos = left;
    for (int i = left + 1; i < n; i++) {
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
    
    // Сортируем выборкой
    for (int k = 0; k < n - 1; k++) {
        int pos = findPositionOfMinimum(a, n, k);
        // Меняем местами a[k] и a[pos]
        int temp = a[k];
        a[k] = a[pos];
        a[pos] = temp;
    }
    
    // Выводим результат
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}