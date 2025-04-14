#include <bits/stdc++.h>
#define size 100
using namespace std;

void tinhTich(int arr[], int n) {
    int tich = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        tich *= arr[i];
    }
    cout << tich << endl;
}

int main() {
    int n, arr[size];
    cin >> n;

    tinhTich(arr, n);
    return 0;
}