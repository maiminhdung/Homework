#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    cout << "Nhap loai lao dong (A, B, C): " << endl;
    cin >> s;

    switch (s) {
        case 'A':
            cout << "Tien thuong lao dong la: 2.000.000 VND" << endl;
            break;
        case 'B':
            cout << "Tien thuong lao dong la: 1.000.000 VND" << endl;
            break;
        case 'C':
            cout << "Tien thuong lao dong la: 0 VND" << endl;
            break;
        default:
            cout << "Khong phai loai lao dong A, B, C" << endl;
            cin >> s;
            break;
    }
}