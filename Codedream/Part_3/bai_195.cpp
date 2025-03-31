#include <bits/stdc++.h>
using namespace std;
#define size 100 // Kich thuoc mang A
#define ll long long // ll = long long
#define pii pair<int, int> // pair<int, int> = (int, int) VD: (1, 2)
#define piii pair<pii, int> // pair<pii, int> = (int, int, int) VD: (1, 2, 3)
#define fi first // fi = first
#define se second // se = second
#define For(i,l,r) for(int i = l; i < r; i++)

void nhapMang(ll A[], ll n) {
    For(i, 0, n) {
        cin >> A[i]; 
    }
}

bool kiemTra(ll A[], ll n) {
    For(i, 0, n) {
        if(A[i] < 2000) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    ll A[size], n;
    cin >> n;
    nhapMang(A, n); // Nhap mang A
    kiemTra(A, n); 

    if(kiemTra(A,n)) 
        cout << "YES" << endl; // In ra YES neu co phan tu < 2000
    else 
        cout << "NO" << endl; // In ra NO neu khong co phan tu < 2000
    
    return 0;
}