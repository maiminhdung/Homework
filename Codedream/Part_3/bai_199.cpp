#include <bits/stdc++.h>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool soNguyenTo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (soNguyenTo(i)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}