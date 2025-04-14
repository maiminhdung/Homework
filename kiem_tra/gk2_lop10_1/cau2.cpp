#include <bits/stdc++.h>
#define size 100
using namespace std;

int soLonNhat(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int soNhoNhat(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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
    cout << soLonNhat(arr, n) << " " << soNhoNhat(arr, n) << endl;
    return 0;
}