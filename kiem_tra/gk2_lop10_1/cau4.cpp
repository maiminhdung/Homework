#include <bits/stdc++.h>
#define size 100
using namespace std;

void soLanXuatHienX(int arr[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            dem++;
        }
    }
    cout << dem << endl;
}

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n, x, arr[size];
    cin >> n;

    nhapMang(arr, n);

    cin >> x;
    soLanXuatHienX(arr, n, x);

    return 0;
}