#include <bits/stdc++.h>
#define size 100
using namespace std;

void demSoNuyenTo(int arr[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        bool isPrime = true;
        if (arr[i] < 2) {
            isPrime = false;
        } else {
            for (int j = 2; j <= sqrt(arr[i]); j++) {
                if (arr[i] % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
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
    int n, arr[size];
    cin >> n;
    
    nhapMang(arr, n);
    demSoNuyenTo(arr, n);
    return 0;
}