#include <bits/stdc++.h>
using namespace std;
#define size 100
#define ll long long // ll = long long
#define pii pair<int, int> // pair<int, int> = (int, int) VD: (1, 2)
#define piii pair<pii, int> // pair<pii, int> = (int, int, int) VD: (1, 2, 3)
#define fi first // fi = first
#define se second // se = second
#define For(i,l,r) for(int i = l; i <= r; i++)

void nhapMang(int A[], int n);
int tinhTong(int A[], int n); // Tinh tong mang
int giaTriCanThem(int A[], int n, int x); // Tinh gia tri can them

int main() {
    int A[size], n, x;
    cin >> n >> x;

    nhapMang(A, n); // Nhap mang A
    tinhTong(A, n); // Tinh tong mang A

    cout << giaTriCanThem(A, n, x) << endl; // In ra gia tri can them

    return 0;
}

int tinhTong(int A[], int n) {
    int tong = 0; 
    For(i, 0, n) {
        tong += A[i];
    }
    return tong;
}

int giaTriCanThem(int A[], int n, int x) {
    int giaTri, tong = tinhTong(A, n);
    giaTri = (abs(tong) + x - 1) / x; // Tinh gia tri can them
    return giaTri;
}

void nhapMang(int A[], int n) {
    For(i, 0, n) {
        cin >> A[i];
    }
}