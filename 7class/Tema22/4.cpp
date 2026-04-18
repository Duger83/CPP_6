#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    char a[1001], b[1001];
    cin >> a >> b;
    
    int result[1002] = {0};
    int i = n - 1, j = m - 1, k = 0;
    int carry = 0;
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result[k] = sum % 10;
        carry = sum / 10;
        k++;
    }
    
    for (int p = k - 1; p >= 0; p--) {
        cout << result[p];
    }
}