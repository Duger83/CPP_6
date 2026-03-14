#include <iostream>
using namespace std;

int sum_of_row(int arr[], int m) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += arr[j];
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int A[100][100];
    
    // Читаем массив
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    
    // Вычисляем и выводим суммы строк
    for (int i = 0; i < n; i++) {
        cout << sum_of_row(A[i], m);
        if (i < n - 1) cout << " "; 
    }
    cout << endl;
}